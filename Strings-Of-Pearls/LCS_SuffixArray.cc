#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define MAXN 500


int comlen(string s1, string s2)
{

    if(find(s1.begin(), s1.end(), '#') != s1.end() && find(s2.begin(), s2.end(), '#') != s2.end())
        return 0;

    if(find(s1.begin(), s1.end(), '#') == s1.end() && find(s2.begin(), s2.end(), '#') == s2.end())
        return 0;



    int res = 0;

    int i = 0;
    while(i < s1.size() && i < s2.size() && s1[i] == s2[i])
    {
        res++;
        i++;
    }

    return res;
}

// C
void suffixArray(char *c, char *a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = &c[i];
    }

    for(int i = 0; i < n; i++)
        cout << a[i] << "\n";
}


// C++
void suffixArrayCPP(string c, vector<string> a)
{
    for(int i = 0; i < c.size(); i++)
    {
        string ss = c.substr(i);
        a.push_back(ss);
    }

    for(int i = 0; i < a.size(); i++)
        cout << a[i] << "\n";

    cout << "\n\n";
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << "\n";


    int maxlen = -1;
    int maxi = 0;
    for(int i = 0; i < c.size(); i++)
    {
        if(comlen(a[i], a[i + 1]) > maxlen)
        {
            maxlen = comlen(a[i], a[i + 1]);
            maxi = i;
        }
    }

    cout << "Output: \n";
    cout << a[maxi].substr(0, maxlen) << "\n";
    //cout << a[maxi] << "\n";
}

int main()
{
//    char c[] = "Ask not what your country can do for you, but what you can do for your country";
//    int n = sizeof(c) / sizeof(char);
//    cout << n << "\n";
//    char *a[MAXN] = {nullptr};
//
//    suffixArray(c, a, n);


    // C++ test
    string c = "abcdefgabcd#xabcyz";
    vector<string> a;
    suffixArrayCPP(c, a);

}