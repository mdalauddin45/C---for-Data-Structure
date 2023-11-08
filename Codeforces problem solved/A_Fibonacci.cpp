#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

vector<vector<long long>> matrixMultiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    int n = A.size();
    int m = B.size();
    int p = B[0].size();
    vector<vector<long long>> result(n, vector<long long>(p, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                result[i][j] = (result[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }

    return result;
}

vector<vector<long long>> matrixExponentiation(const vector<vector<long long>>& A, long long n) {
    int m = A.size();
    vector<vector<long long>> result(m, vector<long long>(m, 0));

    if (n == 1) {
        return A;
    }

    if (n % 2 == 0) {
        vector<vector<long long> > temp = matrixExponentiation(A, n / 2);
        result = matrixMultiply(temp, temp);
    } else {
        vector<vector<long long> > temp = matrixExponentiation(A, n - 1);
        result = matrixMultiply(A, temp);
    }

    return result;
}

long long findFibonacciModuloN(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    vector<vector<long long>> base = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = matrixExponentiation(base, n - 1);

    return result[0][0] % MOD;
}

int main() {
    long long n;
    cin >> n;

    long long fibonacciModN = findFibonacciModuloN(n);
    cout << fibonacciModN << endl;

    return 0;
}
