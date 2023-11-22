#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canBeNonDecreasing(vector<int>& A, vector<int>& colorA, vector<int>& B, vector<int>& colorB) {
    int n = A.size();
    vector<pair<int, int>> sortedA(n);

    for (int i = 0; i < n; ++i) {
        sortedA[i] = {A[i], colorA[i]};
    }
    sort(sortedA.begin(), sortedA.end());

    vector<vector<int>> colors(2 * n + 1);

    for (int i = 0; i < n; ++i) {
        colors[colorB[i]].push_back(B[i]);
    }

    for (auto& elem : sortedA) {
        int currColor = elem.second;

        if (colors[currColor].empty() || colors[currColor].back() < elem.first) {
            return false;
        }

        auto it = lower_bound(colors[currColor].begin(), colors[currColor].end(), elem.first);
        if (it == colors[currColor].end()) {
            return false;
        } else {
            colors[currColor].erase(it);
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n), colorA(n), B(n), colorB(n);

        for (int i = 0; i < n; ++i) cin >> A[i];
        
        for (int i = 0; i < n; ++i) cin >> colorA[i];
        for (int i = 0; i < n; ++i) cin >> B[i];
        for (int i = 0; i < n; ++i) cin >> colorB[i];

        bool result = canBeNonDecreasing(A, colorA, B, colorB);
        if (result) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
