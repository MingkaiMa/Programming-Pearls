#include <iostream>
#include <assert.h>
int exp(int x, int n)
{
    assert(n >= 0);

    if(n == 0)
        return 1;


    if((n & 1) == 1)
        return x * exp(x, n - 1);

    else
        return exp(x, n / 2) * exp(x, n / 2);
}

int main()
{
    using std::cout;
    cout << exp(2, 9) << "\n";
}