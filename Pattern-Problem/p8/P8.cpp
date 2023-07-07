#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    for (i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

// if i/p = 3
// Index Space Star
// 0     0     5
// 1     1     3
// 2     2     1

// we can see that space is equal to index so, j=i
// and for Star j=2n-(2i+1)