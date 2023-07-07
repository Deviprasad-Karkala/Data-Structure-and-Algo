#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (char ch1 = 'A'; ch1 <= 'A' + i; ch1++)
        {
            cout << ch1;
        }
        for(char ch2='A'+i-1;ch2>='A';ch2--){
            cout<< ch2;
        }
        cout << endl;
    }
}
