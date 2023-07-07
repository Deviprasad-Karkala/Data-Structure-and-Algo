#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout << j << " ";

        }
        cout<<endl;

    }
    return 0;
}

// i=1 we need j=n 
// i=2 we need j=n-1
// i=3 we need j=n-2

// That can be => "j = n-i+1"