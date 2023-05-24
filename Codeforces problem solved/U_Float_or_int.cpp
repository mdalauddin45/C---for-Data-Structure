#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    int x;
    cin>>n;
    x=n;
    if(x==n) cout<<"int "<<x;
    else cout<<"float "<<x<<" "<<n-x;
    return 0;
}