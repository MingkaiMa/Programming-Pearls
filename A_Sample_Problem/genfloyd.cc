#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#include <set>
using namespace std;

void genfloyd(int m, int n)
{
    set<int> S;
    set<int>::iterator i;
    for(int j = n - m; j < n; j++)
    {
        int t = rand() % (j + 1);
        if(S.find(t) == S.end())
            S.insert(t);
        else
            S.insert(j);
    }
    for(i = S.begin(); i != S.end(); i++)
        cout << *i << ", ";
    cout << "\n";
}

int main()
{
    genfloyd(20,2000);
}