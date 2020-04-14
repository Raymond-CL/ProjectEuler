#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N=1000;
const int k=13;
short int m[N];

void problem8(){

	ifstream infile;
	infile.open("p8.dat",ios::in);

	//store numbers in array
	int ind=0;
	while(!infile.eof()){
    	char c;
		if(infile.get(c) && !isspace(c)){
			m[ind] = int(c-'0');
			ind++;
		}
	}
	infile.close();

	//brute force find products
	long int prod=0;
	for(int i=0;i<N-k+1;i++){
		long int temp=1;
		for(int j=0;j<k;j++)
			temp *= m[i+j];
		if(temp>prod)
			prod=temp;
	}

	cout << prod << endl;
}
