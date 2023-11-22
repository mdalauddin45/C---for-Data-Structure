#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findAlterEgo(vector<int>& B) {
    int n = B.size();
    vector<int> diffs;

    // Calculate absolute differences
    for (int i = 0; i < n - 1; ++i) {
        diffs.push_back(abs(B[i] - B[i + 1]));
    }

    vector<int> A(n / 2, 0);

    // Reconstruct array A based on differences
    for (int i = 0; i < n / 2; ++i) {
        A[i] = (B[2 * i] + B[2 * i + 1] + diffs[i]) / 2;
    }

    // Validate the constructed A
    for (int i = 0; i < n / 2; ++i) {
        if (abs(A[i] - A[(i + n / 2) % (n / 2)]) != diffs[i]) {
            return vector<int>(); // If A is not valid, return empty vector
        }
    }

    return A;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> B(n);

        for (int i = 0; i < n; ++i) {
            cin >> B[i];
        }

        vector<int> result = findAlterEgo(B);

        if (result.empty()) {
            cout << -1 << endl;
        } else {
            for (int val : result) {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
