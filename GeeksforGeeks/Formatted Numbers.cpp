#include <iostream>

using namespace std;

int main() {
	int A;
	cin >> A;
	string s = to_string(A);
	int n = s.length();
	string ans="";
	for(int i=0;i<n;i++){
		ans += s[i];
		if((n-i-1)%3==0 && i!=n-1){
			ans +=",";
		}
	}
	cout<<ans<<endl;
	return 0;
}
