#include <iostream>
#include <fstream>

using namespace std;

const int N=15;
short int T[N][N];

void problem18(){

	//store numbers in array
	ifstream infile;
	infile.open("p18.dat",ios::in);
    for(int i=0;i<N;i++)
      for(int j=0;j<=i;j++)
        infile >> T[i][j];
	infile.close();

    //initialize tree
    short int temp[N];
    for(int i=0;i<N;i++)
      temp[i] = T[N-1][i];
    
    //sort from base
    for(int i=N-2;i>=0;i--)
      for(int j=0;j<=i;j++)
        temp[j] = max(T[i][j]+temp[j],T[i][j]+temp[j+1]);
    
    cout << temp[0] << endl;
}
