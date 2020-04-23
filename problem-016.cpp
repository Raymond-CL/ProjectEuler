#include <iostream>

using namespace std;

const int N=1000;
long int M[N/2];

void problem16(){

    for(int i=0;i<N/2;i++)
        M[i]=0;
    M[0] = 1;

    //brute force iterative
    for(int j=0;j<N;j++){
      int carry=0;
      for(int i=0;i<N/2;i++){
        int temp = M[i]*2+carry;
        M[i] = temp%10;
        carry = temp/10;
      }
    }

    int sum=0;
    for(int i=0;i<N/2;i++)
        sum += M[i];

    cout << sum << endl;
}
