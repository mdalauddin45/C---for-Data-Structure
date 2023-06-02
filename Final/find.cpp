#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int ans=0;
    string a="Ratul";
    while (ss>>word)
    {
          if(word==a){
            ans++;
        }
    }
   if(ans!=0) cout << "YES";
   else cout << "NO";
    return 0;
}