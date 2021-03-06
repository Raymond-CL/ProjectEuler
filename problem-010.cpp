#include <iostream>

using namespace std;

const int N=2000000;	//increase if not enough primes
bool P[N];	//prime determiner up to number [N]

//sieve of Eratosthenes to find primes
void sieve(){
	for(int i=2;i*i<=N;i++)
		if(P[i])
			for(int j=i*2;j<=N;j+=i)
				P[j]=false;
}

void problem10(){
	for(int i=0;i<N;i++)
		P[i]=true;
	P[0]=false;
	P[1]=false;
	sieve();

	long int sum=0;
	for(int i=0;i<N;i++)
		if(P[i])
			sum+=i;
		
	cout << sum << endl;
}
