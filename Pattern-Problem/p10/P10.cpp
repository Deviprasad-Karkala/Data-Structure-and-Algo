#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    for (i = 1; i <= 2*n-1; i++)
    {
        int star=i;
        if(i> n) star= 2*n-i;
        for (j = 1; j <=star; j++)
        {
            cout << "* ";
        }
         
        cout << endl;
    }

}

// if the problem is symmetric type (for example i/p is 5 and rows to be printed 9) then, i= 2*n-1;
// then j becomes, j=2*n-i