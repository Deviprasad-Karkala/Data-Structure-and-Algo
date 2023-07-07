#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for (i = 0; i<n; i++)
    {
        for (char ch1 = 'E'-i; ch1 <= 'E'; ch1++)
        {
            cout << ch1<<" ";
        }
        cout << endl;
    }
}
