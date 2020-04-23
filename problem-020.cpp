#include <iostream>
#include <math.h>

using namespace std;

const int N = 100;
// upper bound for No. of digits of N!
const int S = int(log10(N))*N;
short int NUM[S];

void times(int);

void problem20(){

    //initialize array
    for(int i=0;i<S;i++)
      NUM[i] = 0;
    NUM[0] = 1;

    //factorial loop
    for(int j=2;j<=N;j++)
      times(j);

    //summation
    int sum=0;    
    for(int i=S-1;i>=0;i--)
      sum += NUM[i];

    cout << sum << endl;
}

void times(int n){
    while(n%10==0) //not necessary to remove zeros
      n=n/10;
    int carry=0;
    for(int i=0;i<S;i++){
      int temp = NUM[i]*n+carry;
      NUM[i] = temp%10;
      carry = temp/10;
    }

}
