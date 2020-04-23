#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//array stores numbers in inverse order
//A[0] stores right-most digit
//here we assume that 100 50-digit number is added
//thus the final sum should be no more than 50+2 digits
const int M=50;
const int N=50+2;
short int Tot[N];

//array add function
void add(short int a[M]){
	int carry=0;
	for(int i=0;i<M;i++){
		int sum=a[i]+Tot[i]+carry;
		Tot[i] = sum%10;
		carry = sum/10;
	}
	Tot[M]+=carry;
	Tot[M+1]+=Tot[M]/10;
	Tot[M]=Tot[M]%10;
}

void problem13(){

	ifstream infile;
	infile.open("013.dat",ios::in);

	//store numbers in array
	short int temp[M]={};
	int ind=M-1;
	while(!infile.eof()){
    	char c;
		if(infile.get(c) && !isspace(c)){
			temp[ind] = int(c-'0');
			ind--;
		}
		if(ind<0){	//accumulate sum
			add(temp);
			ind=M-1;
		}
	}
	infile.close();

	for(int i=N-1;i>=0;i--)
		cout << Tot[i];
	cout << endl;
}
