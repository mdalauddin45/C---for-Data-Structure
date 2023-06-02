#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string ans;
    while (ss>>word)
    {
        if(std::string::npos== s.find("Ratul")){
            ans="NO";
        }else{
            ans="YES";
        }
    }
    cout<<ans;
   
    return 0;
}