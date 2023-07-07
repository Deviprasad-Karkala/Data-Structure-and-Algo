#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(char ch1='A';ch1<='A'+n-1;ch1++){
        for(char ch2='A';ch2<=ch1;ch2++){
            cout<<ch1<<" ";
        }
        cout<<endl;
    }
}