#include<iostream>
using namespace std;
int my_min(int a,int b){
    if(a<b) return a;
    else return b;
}
int my_max(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a,b;
    cin>>a>>b;
    int min=my_min(a,b);
    int max=my_max(a,b);
    cout<<"The minimun value is "<<min<<endl<<"The maximum value is "<<max<<endl;
    return 0;
}