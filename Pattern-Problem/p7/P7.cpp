#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for (i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<i*2+1;j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

// if i/p = 3
// Index Space Star
// 0     2     1
// 1     1     3
// 2     0     5

// we can see that space is decreasing and j=n-i-1
// and Star get increases multiple 0f 2 so j=i*2+1