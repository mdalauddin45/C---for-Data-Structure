#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x<=y && y<=z) cout<<x<<endl<<y<<endl<<z<<endl;
    else if(x<=z && z<=y) cout<<x<<endl<<z<<endl<<y<<endl;
    else if(y<=z && z<=x) cout<<y<<endl<<z<<endl<<x<<endl;
    else if(y<=x && x<=z) cout<<y<<endl<<x<<endl<<z<<endl;
    else if(z<=x && x<=y) cout<<z<<endl<<x<<endl<<y<<endl;
    else if(z<=y && y<=x) cout<<z<<endl<<y<<endl<<x<<endl;
    cout<<endl;
    cout<<x<<endl<<y<<endl<<z<<endl;
    return 0;
}