#include <iostream>

using namespace std;

//test for Palindrome-ness
bool isPalin(int p){
	int x,y,z;
	int temp=p;
	x=temp%10; temp=temp/10;
	y=temp%10; temp=temp/10;
	z=temp%10;
	temp=100001*x+10010*y+1100*z;
	if(temp==p) return true;
	else	return false;
}

void problem4(){

	int Lp=0;	//Largest Palindrome

	//assume 6 digits, begins at 999
	//adjust lower end for corrections
	for(int i=999;i>900;i--) 
	for(int j=999;j>=i;j--){
		int p=i*j;
		//if(isPalin(p))
		//	cout << i << '\t' << j << '\t' << p << endl;
		if(isPalin(p) && p>Lp)
			Lp=p;
	}
		
	cout << Lp << endl;
}
