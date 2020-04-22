#include <iostream>

using namespace std;

const int N=1000;

int get_count(int);
int letters(int);

void problem17(){

    int sum=0;
    for(int i=1;i<=N;i++)
      sum += get_count(i);
    cout << sum << endl;
}

// modulize the given number
int get_count(int n){
    int count=0;
    int rem=0;
    int temp=0;

    temp = n/1000;
    rem = n%1000;
    if(temp!=0){
      count += letters(temp);
      count += letters(1000);
    }

    temp = rem/100;
    rem = rem%100;
    if(temp!=0){
      count += letters(temp);
      count += letters(100);
    }

    if(n>100 && rem!=0)
      count += letters(-1);

    temp = rem/10;
    if(rem>=20){
      count += letters(temp*10);
      count += letters(rem%10);
    }
    else
      count += letters(rem);

    return count;
}

// return number of letters for a given word
int letters(int n){
    if(n==-1) return 3;      //and
    if(n==0) return 0;      //NULL
    if(n==1) return 3;      //one
    if(n==2) return 3;      //two
    if(n==3) return 5;      //three
    if(n==4) return 4;
    if(n==5) return 4;
    if(n==6) return 3;
    if(n==7) return 5;
    if(n==8) return 5;
    if(n==9) return 4;
    if(n==10) return 3;
    if(n==11) return 6;
    if(n==12) return 6;
    if(n==13) return 8;
    if(n==14) return 8;
    if(n==15) return 7;
    if(n==16) return 7;
    if(n==17) return 9;
    if(n==18) return 8;
    if(n==19) return 8;
    if(n==20) return 6;
    if(n==30) return 6;
    if(n==40) return 5;
    if(n==50) return 5;
    if(n==60) return 5;
    if(n==70) return 7;
    if(n==80) return 6;
    if(n==90) return 6;
    if(n==100) return 7;
    if(n==1000) return 8;
}

