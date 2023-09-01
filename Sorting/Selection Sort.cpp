// Selection Sort = Select and Swap

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, min, temp;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i <= n - 2; i++)
    {
        min = i;
        for (j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    cout << "Sorted elements are" << endl;
    for (i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
}
