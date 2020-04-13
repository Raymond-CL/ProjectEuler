#include <iostream>

using namespace std;

const int N=150000;
int P[N];

void sieve(){
	for(int i=2;i*i<=N;i++)
		if(P[i]==1)
			for(int j=i*2;j<=N;j+=i)
				P[j]=0;
}

void problem7(){
	for(int i=0;i<N;i++)
		P[i]=1;
	P[0]=0;
	P[1]=0;
	sieve();

	int count=0;
	for(int i=0;i<N;i++){
		if(P[i]==1){
			count++;
			if(count==10001)
				cout << i << endl;
		}
	}
}
