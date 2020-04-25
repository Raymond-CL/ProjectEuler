#include "problem-021.cpp"
#include <ctime>

int main(){

    std::clock_t t = std::clock();

	problem21();

    t = std::clock() - t;
    cout << "time elapsed: " << 1000.0*t/CLOCKS_PER_SEC << " ms." << endl;

	return 0;

}
