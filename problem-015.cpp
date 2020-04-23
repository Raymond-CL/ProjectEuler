#include <iostream>

using namespace std;

const int N=20;
long int M[N+1];

//use Pascal's triangle method
void problem15(){

    for(int i=0;i<=N;i++)
        M[i]=1;

    for(int j=0;j<N;j++)
      for(int i=0;i<=N;i++)
        if(i==0)
            M[i]=M[i];
        else
            M[i]=M[i-1]+M[i];

    cout << M[N] << endl;
}
