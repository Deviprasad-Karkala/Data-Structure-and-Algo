// Bubble Sort= push max value to last by adjacent swap

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int a[n];
    // array input
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Main Logic
    for (i = n - 1; i >= 1; i--)
    {
        int didSwap=0;
        for (j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                didSwap=1;
            }
        }
        if(didSwap==0){  //If array is already Sorted, we don't need to check for all rounds
            break;
        }
    }

    // array output
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}