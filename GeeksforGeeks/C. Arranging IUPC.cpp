#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char> letter;
        for(char ch = 'a'; ch<='z'; ch++) letter.insert(ch);
        for(char ch : str){
            letter.erase(tolower(ch));
        }
        int notused = letter.size();
        cout<<notused<<endl;
    }
    
    return 0;
}