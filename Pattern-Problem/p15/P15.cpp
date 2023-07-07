#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (char ch='A';ch<='A'+i-1;ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}