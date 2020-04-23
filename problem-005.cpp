#include <iostream>
#include <math.h>

using namespace std;

const int N=21;
bool P[N];	//prime determiner up to number [N-1]

//sieve of Eratosthenes to find primes
void sieve(){
	for(int i=2;i*i<=N;i++)
		if(P[i])
			for(int j=i*2;j<=N;j+=i)
				P[j]=false;
}

void problem5(){
	const int d=N/(log(N)-1); //number of primes under N
    int primes[d];
	int powers[d];
    int counts[d];
	int size=0;
	long int multiple=1;

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
	for(int i=0;i<d;i++)	//initialize powers
		powers[i]=0;

	//go through all numbers
	for(int i=2;i<N;i++){
		int temp=i;
		int ind=0;
		for(int j=0;j<size;j++)	//initialize counter
			counts[j]=0;

		//prime factorization and power counting
		while(temp!=1)
			if(temp%primes[ind]==0){
				temp = temp/primes[ind];
				counts[ind]++;
			}				
			else
				ind++;
		
		//update maximum count
		//cout << i << " = ";
		for(int k=0;k<size;k++){
			//cout << primes[k] << '^' << counts[k] << " * ";
			if(counts[k]>powers[k])
				powers[k]=counts[k];
		}
		//cout << "\b\b " << endl;
	}		

	//multiply highest powers
	//cout << "smallest multiple = ";
	for(int i=0;i<size;i++){
		//cout << double(primes[i]) << '^' << double(powers[i]) << " * ";
		multiple *= pow( double(primes[i]) , double(powers[i]) );
	}
	//cout << "\b\b= ";

	//uncomment cout statements above for steps
	cout << multiple << endl;
}
