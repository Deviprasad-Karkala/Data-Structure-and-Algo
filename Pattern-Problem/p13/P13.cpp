#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int temp=1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
}