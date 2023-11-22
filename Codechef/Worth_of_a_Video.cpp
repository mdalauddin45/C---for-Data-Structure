#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s;
        cin >> s;

        int frames = s * 24; 
        int words = frames * 1000;
        cout << words << endl;
    }
	return 0;
}
