#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, pair<int, int>> p,
pair<int, pair<int, int>> p1)
{
if (p.second.second != p1.second.second)
return (p.second.second > p1.second.second);
else
return (p.second.first < p1.second.first);
}
void Sort_By_Frequency(int arr[], int n)
{
unordered_map<int, pair<int, int>> mp;
for (int i = 0; i < n; i++)
{
if (mp.find(arr[i]) != mp.end())
mp[arr[i]].second++;
else
mp[arr[i]] = make_pair(i, 1);
}
auto it = mp.begin();
vector<pair<int, pair<int, int>>> b;
for (it; it != mp.end(); ++it)
b.push_back(make_pair(it->first, it->second));
sort(b.begin(), b.end(), compare);
for (int i = 0; i < b.size(); i++)
{
cout << b[i].first << (i!=b.size()-1?", ":"");
}
}
int main()
{
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; ++i)
cin >> arr[i];
Sort_By_Frequency(arr, n);
return 0;
}