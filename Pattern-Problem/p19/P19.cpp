#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (j = 0; j <= 2 * i - 1; j++)
        {
            cout << " ";
        }
        for (j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (j = 0; j <= 2*n-2*i-3; j++)
        {
            cout << " ";
        }

        for (j = i; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
