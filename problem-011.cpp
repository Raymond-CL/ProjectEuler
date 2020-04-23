#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int N=20;
short int m[N][N];
const int k=4;

void problem11(){

	ifstream infile;
	infile.open("011.dat",ios::in);

	//store numbers in array
	int row=0;
	int col=0;
	while(!infile.eof()){
    	char c1,c2;
		if(infile.get(c1) && !isspace(c1)){
			infile.get(c2);
			m[col][row] = 10*int(c1-'0') + int(c2-'0');
			row++;
			if(row==N){
				row=0;
				col++;
			}
		}
	}
	infile.close();

	//brute force find products
	long int prod=0;

	//check horizontal product
	for(int i=0;i<N;i++)
	for(int j=0;j<N-k+1;j++){
		long int temp=1;
		for(int l=0;l<k;l++)
			temp *= m[i][j+l];
		if(temp>prod) 
			prod=temp;
	}
	//check vertical product
	for(int i=0;i<N-k+1;i++)
	for(int j=0;j<N;j++){
		long int temp=1;
		for(int l=0;l<k;l++)
			temp *= m[i+l][j];
		if(temp>prod) 
			prod=temp;
	}
	//check diagonal down product
	for(int i=0;i<N-k+1;i++)
	for(int j=0;j<N-k+1;j++){
		long int temp=1;
		for(int l=0;l<k;l++)
			temp *= m[i+l][j+l];
		if(temp>prod) 
			prod=temp;
	}
	//check diagonal up product
	for(int i=0;i<N-k+1;i++)
	for(int j=k-1;j<N;j++){
		long int temp=1;
		for(int l=0;l<k;l++)
			temp *= m[i+l][j-l];
		if(temp>prod) 
			prod=temp;
	}
	
	cout << prod << endl;
	
}
