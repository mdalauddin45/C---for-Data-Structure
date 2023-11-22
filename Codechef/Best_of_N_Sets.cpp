#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int ts = x + y; 
        int n1 = ts + x;

        if (n1 % 2) {
            ts++; 
        }

        int possibleN = ts + 1;
        
        if (x < y + (possibleN - ts) / 2) {
            cout << possibleN << endl;
        } else {
            cout << ts << endl;
        }
    }
    
    return 0;
}
