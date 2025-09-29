#include <iostream>
#include <random>
#include <ctime>


using namespace std;



int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 100);

    int n = distrib(gen);
    int m = distrib(gen);
    
    cout << n << endl;
    return 0;
}

