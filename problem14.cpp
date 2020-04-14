#include <iostream>
#include <vector>

using namespace std;

const int N=1000000;

void problem14(){

	int num;
	int max=0;

	//brute force iterative
	long int n;
	for(int i=N/2;i<N;i++){
		n=i;
		int count=1;
		//run sequence
		while(n!=1){
			if(n%2==0)
				n=n/2;
			else
				n=3*n+1;
			count++;
			
			if(count>max){
				max=count;
				num=i;
			}
		}
	}

	cout << num << " has a chain length of " << max << endl;
}
