#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,b1,a2,b2;
    cin>>a1>>b1>>a2>>b2;
    if((a2>b1&&b2>b1)||(a2<a1&&b2<a1)) cout<<-1;
    else{
        int x,z;
        x=max(a1,a2);
        z=min(b1,b2);
        cout<<x<<" "<<z;
    }
    return 0;
}