#include<bits/stdc++.h>
using namespace std;
int main(){
    char f1[100],s1[100],f2[100],s2[100];
    cin>>f1>>s1;
    cin>>f2>>s2;
    if(strcmp(s1,s2)==0){
        cout<<"ARE Brothers"<<endl;
    }else{
        cout<<"NOT"<<endl;
    }
    return 0;
}