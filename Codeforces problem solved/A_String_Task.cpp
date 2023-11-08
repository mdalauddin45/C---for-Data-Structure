#include<bits/stdc++.h>
using namespace std;
string processString(string s) {
    string vowels = "AEIOUYaeiouy";
    string result = "";

    for (char ch : s) {
        if (vowels.find(ch) == string::npos) {
            result += ".";
            result += tolower(ch);
        }
    }

    return result;
}

int main()
{
    string str;
    cin>>str;
    string result = processString(str);
    cout << result << endl;
    return 0;
}