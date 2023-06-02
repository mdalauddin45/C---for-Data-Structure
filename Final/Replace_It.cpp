#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ch;
        // getline(cin,ch);
        cin>>ch;
        cin.ignore();
       for(int i=0;i<ch.size();i++)
       {
        if(ch[i]=='g'){
            ch[i]='$';
        }
       }
        cout<<ch<<endl;
    }
    
    return 0;
}