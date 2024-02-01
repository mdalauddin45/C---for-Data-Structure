#include<bits/stdc++.h>
using namespace std;
 vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(!binary_search(begin(nums), end(nums), i)) 
                ans.push_back(i);
        return ans;
}
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 1; i <= n; i++) {
         if(!binary_search(begin(v), end(v), i)) 
                cout<<i<<" ";
    }
    return 0;
}
