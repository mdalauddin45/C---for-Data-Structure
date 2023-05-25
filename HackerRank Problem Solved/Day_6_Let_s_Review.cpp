#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        for(int j=0;j<a.length();j++){
            if(j%2==0){
                cout<<a[j];
            }
        }
        cout<<" ";
         for(int j=0;j<a.length();j++){
            if(j%2!=0){
                cout<<a[j];
            }
        }
        cout<<endl;
    }
    return 0;
}