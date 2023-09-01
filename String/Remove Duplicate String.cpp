#include<bits/stdc++.h>
using namespace std;


int main(){
    string str,res="";
    int i,j;

    cout<< "Enter the string" <<endl;
    getline(cin,str);

    for(i=0;i<str.length();i++){
        for(j=0;j<str.length();j++){
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
            res+=str[i];
        }
    }
    cout<<"Duplicates are removed"<<endl<<res<<endl;
}