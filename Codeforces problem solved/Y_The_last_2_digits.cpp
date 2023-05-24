#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,ans,v;
    cin>>a>>b>>c>>d;
    a%=100;
    b%=100;
    c%=100;
    d%=100;
    ans=a*b*c*d;
    if(ans%100<=9)cout<<0;
    v= (ans) % 100  ;
    cout<<v;
    return 0;
}