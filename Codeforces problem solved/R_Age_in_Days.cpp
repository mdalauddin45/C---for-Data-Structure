#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n%365;
    int d=m%30;
    if(n/365){
        cout<<n/365<<" years"<<endl;
    }else{
        cout<<"0 years"<<endl;
    }
    if(m/30){
        cout<<m/30<<" months"<<endl;
    }else{
        cout<<"0 months"<<endl;
    }
    if(d){
        cout<<d<<" days"<<endl;
    }else{
        cout<<"0 days"<<endl;
    }
    return 0;
}