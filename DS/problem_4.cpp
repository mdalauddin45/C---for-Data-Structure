// Given a positive number N, efficiently generate binary numbers between 1 to N using queue data 
// structure and in linear time. 
// For example, for N = 10, the binary numbers ar
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
queue<string> q;
q.push("1");
for (int i = 1; i <= n; i++)
{
cout << "Binary representation of " << i << " is " << q.front() << "\n";
string tmp = q.front();
q.pop();
q.push(tmp + '0');
q.push(tmp + '1');
}
return 0;
}