#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
using namespace std;

void randselect(int m, int n)
{
    srand(time(NULL));
    if(m > 0)
    {
        if(rand() % n < m)
        {
            cout << n - 1 << ", ";
            randselect(m - 1, n - 1);
        }
        else
            randselect(m, n - 1);
    }
}

int main()
{
    randselect(20, 200000);
}