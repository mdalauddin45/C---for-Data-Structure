#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x[n],y[n],a=0;
    for(int i=0;i<n;i++){
        x[i]=arr[i];
        cout<<x[i];
    }
    cout<<endl;
    for(int i=n-1;i>=0;i--){
        y[i]=arr[i];
        cout<<y[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]!=y[i]){
            a=0;
        }else {
            a=1;
        };
    }
    // if(a==1){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }

    return 0;
}