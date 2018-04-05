#include <iostream>
#include <stdlib.h>
using namespace std;

void genknuth(int m, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(rand() % (n - i) < m)
        {
            cout << i << "\n";
            m--;
        }
    }
}

int main()
{
    genknuth(20, 200);
}