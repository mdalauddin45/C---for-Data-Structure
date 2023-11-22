#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x=0;
	    if(a > b) x = 2*a-1;
	    else x=2 *b -1;
	    cout<<x<<endl;
	}
	return 0;
}