#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int *a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     cin>>m;
    int b[m];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    // b[3]=60;
    // b[4]=40;
    for(int i=n;i<n+(m-n);i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}