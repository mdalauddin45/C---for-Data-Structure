#include<bits/stdc++.h>
using namespace std;
int findsingle(vector<int>& nums){
    int ans=0;
    for(int num: nums){
        ans^=num;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<v.size(); i++) cin>>v[i];
    cout<<findsingle(v)<<endl;
    return 0;
}