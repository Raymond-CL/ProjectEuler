#include <iostream>

using namespace std;

void problem6(){

	int n=100;
	long int sum = n*(n+1)*(2*n+1)/6;
    long int sq = (1+n)*n/2;
    sq *= sq;

    cout << sq-sum << endl;
}
