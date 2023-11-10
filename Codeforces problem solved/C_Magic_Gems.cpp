#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int main()
{
    long long N, M;
    cin >> N >> M;
    vector<long long> dp(N + 1, 0);
    dp[0] = 1;
    for (long long i = 1; i <= N; ++i) {
        dp[i] = dp[i - 1];
        if (i >= M) {
            dp[i] = (dp[i] + dp[i - M]) % MOD;
        }
    }
    cout << dp[N] << endl;
    return 0;
}
