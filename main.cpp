//#include "problem11.cpp"
//#include "problem12.cpp"
//#include "problem13.cpp"
//#include "problem14.cpp"
//#include "problem15.cpp"
#include "problem16.cpp"
//#include "problem7.cpp"
//#include "problem8.cpp"
//#include "problem9.cpp"
//#include "problem10.cpp"
#include <ctime>

int main(){

    std::clock_t t = std::clock();

	problem16();

    t = std::clock() - t;
    cout << "time elapsed: " << 1000.0*t/CLOCKS_PER_SEC << " ms." << endl;

	return 0;

}
