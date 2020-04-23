#include <iostream>

using namespace std;

void problem1(){

    int max=1000;
    int sum=0;

    /*
	// brute force
    for(int i=1;i<max;i++)
		if(i%3==0 || i%5==0)
			sum+=i;
    */

    // use sum properties
    sum += (3+999)*(999/3)/2;
    sum += (5+995)*(999/5)/2;
    sum -= (15+990)*(999/15)/2;

    cout << sum << endl;

}
