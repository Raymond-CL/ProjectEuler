#include <iostream>

using namespace std;

void problem19(){

    short int M[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int day = 1; //Monday on 1900 Jan
    int count = 0;

    for(int y=1900;y<=2000;y++)
      for(int m=0;m<12;m++){
        if(day%7==0 && y>=1901) //find Sundays
          count++;

        day += M[m];    //increment days
        if(m==1 && y%4==0 && ((y%100==0)==(y%400==0)))
          day+=1;
      }

    cout << count << endl;
}
