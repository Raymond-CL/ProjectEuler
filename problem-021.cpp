#include <iostream>
#include <math.h>

using namespace std;

//one has to guess the largest prime that can divide this triangular
//number with k divisors, in order to set an upper bound for N.
//Since the sieve itself takes considerable time for large N.

const int N=10000; //find primes below this number
const int k=500;	//number of divisors
bool P[N];	//prime determiner up to number [N-1]

//sieve of Eratosthenes to find primes
void sieve(){
	for(int i=2;i*i<=N;i++)
		if(P[i])
			for(int j=i*2;j<=N;j+=i)
				P[j]=false;
}

void problem21(){
	const int d=1.5 * N/(log(N)-1); //number of primes under N
    int primes[d];
	int powers[d];
	int size=0;
	int count=0;

    //initialize prime determiner
	for(int i=0;i<N;i++)
		P[i]=true;
	P[0]=false;
	P[1]=false;
	sieve();

	for(int i=2;i<N;i++)	//initialize primes
		if(P[i]){
			primes[size]=i;
			size++;
		}

	//go through all triangular numbers
	int t=0;
	int i=1;
	while(count<k){
		t+=i;
		int temp=t;
		count=1;
		
		for(int j=0;j<size;j++)	//initialize counter
			powers[j]=0;
		
		//prime factorization and power counting
		int ind=0;
		while(temp!=1)
			if(temp%primes[ind]==0){
				temp = temp/primes[ind];
				powers[ind]++;
			}				
			else
				ind++;
		
		//number of divisors
		for(int k=0;k<size;k++)
			count *= powers[k]+1;

		i++;
	}	
	
	cout << "The " << i 
		<< "-th triangular number = " << t 
		<< ", with " << count 
		<< " divisors." << endl;

}
