#include <iostream>

using namespace std;

void problem6(){

	int n=100;
    int sum=0;
	int sq=0;
	
	//brute force
	/*
	for(int i=1;i<=n;i++){
		sum += i*i;
		sq += i;
	}
	sq *= sq;
	*/

	//use square sum rules
	sum = n*(n+1)*(2*n+1)/6;
    sq = (1+n)*n/2;
    sq *= sq;

    cout << sq-sum << endl;
}
