#include<iostream>
using namespace std;

int main()
{
	int n, t{1};
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << t << " " << t+1 << " " << t+2 << " " << "PUM\n";
		t += 4;
	}
	return 0;
}