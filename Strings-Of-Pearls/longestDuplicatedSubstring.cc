#include <iostream>

using namespace std;

int comlen(char* p, char* q)
{
    int i = 0;
    while(*p && (*p++ == *q++))
        i++;
    return i;
}

void longestDuplicatedSubstring(char* c, int n)
{
    int maxlen = -1;
    int maxi = 0, maxj = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(comlen(&c[i], &c[j]) > maxlen)
            {
                maxlen = comlen(&c[i], &c[j]);
                maxi = i;
                maxj = j;
            }
        }
    }


    for(int i = maxi; i < maxlen + maxi; i++)
        cout << c[i];
    cout << endl;

}


int main()
{
    char c[] = "Ask not what your country can do for you, but what you can do for your country";
    int n = sizeof(c) / sizeof(char);

    longestDuplicatedSubstring(c, n);
}