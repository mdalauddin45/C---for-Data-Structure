#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,bin=0; 
    cin>>n;
    while(n>0)
        {
        if(n%2==1)
            r++;
        else
            {
            if(r>bin)
                bin=r;
            r=0;
        }
        n/=2;
    }
    if(r>bin)
        bin=r;
    cout<<bin;
    return 0;
}