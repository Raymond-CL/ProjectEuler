#include <iostream>

using namespace std;

const int N=1000;

void problem9(){

	//brute force find
	for(int a=2;a<N/3;a++)
	for(int b=a+1;b<(N-a)/2;b++){
		int c=N-a-b;
		if(a*a+b*b==c*c){
			cout << a*b*c << endl;
			return; 
		}
	}
}
