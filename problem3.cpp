#include <iostream>
#include <array>
#include <math.h>

using namespace std;

const long int N = 600851475143;
const int size=10000;	//increase to find more primes
bool P[size];

void sieve(){
	for(int i=2;i*i<=size;i++)
		if(P[i]==1)
			for(int j=i*2;j<=size;j+=i)
				P[j]=0;
}

void problem3(){

	for(int i=0;i<size;i++)
		P[i]=1;
	P[0]=0;
	P[1]=0;
	sieve();

    long int temp = N;
    int ind = 1;
    while(temp!=1){
		if(P[ind])
			if(temp%ind==0){
				temp = temp/ind;
				cout << ind << '\t' << temp << endl;
			}
			else
				ind++;
		else
			ind++;

		if(ind>=size){
			cout << "increase size to find more primes!\n";
 			break;
		}
	}

}
