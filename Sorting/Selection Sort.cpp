// Selection Sort = Select Min and Swap

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    int a[n];
    //array input
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    //Main Logic
    for(i=0;i<=n-2;i++){
        int min=i;
        for(j=i;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        //swap
        int temp= a[min];
        a[min]= a[i];
        a[i]=temp;
    }

    // array output
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}