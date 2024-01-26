#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int submissions = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            submissions++;
            i++;  // Skip all consecutive '0's
        }
    }

    cout << submissions << endl;

    return 0;
}
