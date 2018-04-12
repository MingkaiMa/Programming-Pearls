#include <iostream>
using namespace std;

template<class T>

class prequeue
{
private:
    int n, maxsize;
    T *x;

    void swap(int i, int j)
    {
        T t = x[i];
        x[i] = x[j];
        x[j] = t;
    }

public:
    prequeue(int m)
    {
        maxsize = m;
        x = new T[maxsize + 1];
        n = 0;
    }

    void insert(T t)
    {
        int i, p;
        x[++n] = t;
        for(i = n; i > 1 && x[p = i / 2] > x[i]; i = p)
            swap(p, i);
    }

    T extractmin()
    {
        int i, c;
        T t = x[1];
        for(i = 1; (c = 2 * i) <= n; i = c)
        {
            if(c + 1 <= n && x[c + 1] < x[c])
                c++;
            if(x[i] <= x[c])
                break;
            swap(c, i);
        }
        return t;
    }
}

void pqsort(T v[], int n)
{
    prequeue<T> pq(n);
    int i;
    for(i = 0; i < n; i++)
        pq.insert(v[i]);

    for(int i = 0; i < n; i++)
        v[i] = pq.extractmin();
}