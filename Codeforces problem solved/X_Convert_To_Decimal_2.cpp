#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        bitset<32> binaryRepresentation(x);
        bitset<32> resultBinaryRepresentation;
        int cnt=binaryRepresentation.count();
        for (int i = 0; i < cnt; ++i) {
            resultBinaryRepresentation.set(i);
        }
        int resultDecimal = resultBinaryRepresentation.to_ulong();
        cout<< resultDecimal << endl;
    }

    return 0;
}
