#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int spaces = 2 * n - 2;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (j = 1; j <= star; j++)
        {
            cout << "*";
        }

        for (j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}
