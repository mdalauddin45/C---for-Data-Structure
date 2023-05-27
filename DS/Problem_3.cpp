// Given a string containing opening and closing braces, check if it represents a balanced 
// expression or not.
#include <bits/stdc++.h>
using namespace std;
bool is_balanced(string s)
{
stack<char> st;
for (int i = 0; i < s.size(); i++)
{
char now = s[i];
if (now == '(' || now == '{' || now == '[')
st.push(now);
else
{
if (st.empty())
return false;
if (now == ')' && st.top() == '(')
st.pop();
else if (now == '}' && st.top() == '{')
st.pop();
else if (now == ']' && st.top() == '[')
st.pop();
else
return false;
}
}
if (st.empty())
return true;
else
return false;
}
int main()
{
string str;
cin >> str;
cout << (is_balanced(str) ? "balanced expressions" : "Not balanced expressions");
return 0;
}
