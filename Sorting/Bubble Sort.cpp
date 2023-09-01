// Bubble sort = select Max and swap

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=n-1;i>=1;i--){
        for(j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}