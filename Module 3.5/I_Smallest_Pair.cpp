#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,flag=1,min;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int i=0;i<x;i++){
            cin>>arr[i];
        }
        for(int j=1;j<=x;j++){
            for(int k=j+1;k<=x;k++){
                r=(arr[j-1]+arr[k-1]+(k-j));
                 if(flag==0 && min>r){
                  min=r;
                  }
                 if(flag){
                   min=r;
                   flag=0;
                }
                r=0;
            }
        }
       cout<<min<<endl;
    }
    
    return 0;
}