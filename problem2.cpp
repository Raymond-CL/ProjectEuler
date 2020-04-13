#include <iostream>

using namespace std;

void problem2(){

    int max=4000000;
	int a=1, b=2, c=a+b;
	int sum=0;

    while(b<max){
        sum+=b;
		a=b+c;
		b=c+a;
		c=a+b;
	}

    cout << sum << endl;
}
