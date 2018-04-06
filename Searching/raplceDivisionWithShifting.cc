#include <iostream>

using namespace std;

int divisionWithShift(int n, int m)
{
    int goal = n / m;

    int binshift = 1;
    for(int i = 2; i < goal; i *= 2)
        binshift++;

    int nbins = 1 + (n >> binshift);
}