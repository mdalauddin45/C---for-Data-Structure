#include <iostream>
#include <vector>
using namespace std;

int findMinXOR(vector<int>& arr) {
    int n = arr.size();
    int xor_sum = 0;
    for (int i = 0; i < n; ++i) {
        xor_sum ^= arr[i];
    }

    int min_xor = xor_sum; 
    for (int i = 0; i < n; ++i) {
        int xor_without_element = xor_sum ^ arr[i];
        min_xor = min(min_xor, xor_without_element);
    }
    return min_xor;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];
        int result = findMinXOR(arr);
        cout << result << endl;
    }

    return 0;
}
