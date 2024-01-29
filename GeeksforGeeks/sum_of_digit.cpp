#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin >> n;
        int s = 0;
        for (int i = 1; i <= n; i++) {
            int num = i; 
            while (num != 0) {
                s += num % 10; 
                num /= 10;    
            }
        }
        cout <<"Case "<<i<<": "<< s << endl;
    
    }
    return 0;
}
