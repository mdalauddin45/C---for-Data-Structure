#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

template <class T>
inline void read(T &x) {
    x = 0;
    char c = getchar();
    bool f = 0;
    for (; !isdigit(c); c = getchar()) f ^= c == '-';
    for (; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
    x = f ? -x : x;
}

template <class T>
inline void write(T x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    T y = 1;
    int len = 1;
    for (; y <= x / 10; y *= 10) ++len;
    for (; len; --len, x %= y, y /= 10) putchar(x / y + 48);
}

const LL MOD = 1e9 + 7, PHI = 1e9 + 6;
LL n, f1, f2, f3, c, ans;

struct Matrix {
    int size;
    LL mat[6][6];
    
    Matrix(int x) {
        size = x;
        memset(mat, 0, sizeof (mat));
    }
    inline friend Matrix operator*(Matrix a, Matrix b) {
        Matrix c(a.size);
        for (int i = 1; i <= c.size; ++i)
            for (int k = 1; k <= c.size; ++k)
                for (int j = 1; j <= c.size; ++j)
                    c.mat[i][j] = (c.mat[i][j] + a.mat[i][k] * b.mat[k][j]) % PHI;
        return c;
    }
} baseA(3), x(3), y(3), z(3), baseB(5), w(5);

inline LL quickPow(LL x, LL p) {
    LL res = 1;
    for (; p; p >>= 1, x = x * x % MOD)
        if (p & 1) res = res * x % MOD;
    return res;
}

inline Matrix quickPow(Matrix x, LL p) {
    Matrix res(x.size);
    for (int i = 1; i <= res.size; ++i) res.mat[i][i] = 1;
    for (; p; p >>= 1, x = x * x)
        if (p & 1) res = res * x;
    return res;
}

inline void build() { 
    x.mat[3][1] = y.mat[2][1] = z.mat[1][1] = 1;
    w.mat[5][1] = 2;
    baseA.mat[1][1] = baseA.mat[1][2] = baseA.mat[1][3] = 
    baseA.mat[2][1] = baseA.mat[3][2] = 1;
    for (int i = 1; i <= 5; ++i) baseB.mat[1][i] = 1;
    baseB.mat[2][1] = baseB.mat[3][2] = baseB.mat[4][4] = 
    baseB.mat[4][5] = baseB.mat[5][5] = 1;
}

int main() {
    read(n), read(f1), read(f2), read(f3), read(c);
    build();
    baseA = quickPow(baseA, n - 3), baseB = quickPow(baseB, n - 3);
    w = baseB * w, x = baseA * x, y = baseA * y, z = baseA * z;
    ans = quickPow(c, w.mat[1][1]) * quickPow(f1, x.mat[1][1]) % MOD * 
    quickPow(f2, y.mat[1][1]) % MOD * quickPow(f3, z.mat[1][1]) % MOD;
    write(ans);
    putchar('\n');
    return 0;
}