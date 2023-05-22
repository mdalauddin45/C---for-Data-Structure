#include<iostream>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int sum=x+y;
    long long int mul=(x*1)*(y*1);
    long long int sub=x-y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<mul<<endl;
    cout<<x<<" - "<<y<<" = "<<sub<<endl;
    return 0;
}