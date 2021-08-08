/**
 * Title   : Fibonacci Finding (easy)
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/fibonacci-finding-easy/problem
**/

#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

vector<vector<int> > multiply(vector<vector<int> >& A, vector<vector<int> >& B) {

    int n = A.size(), m = A[0].size(), k = B[0].size();

    vector<vector<int> > res(n, vector<int>(k, 0));

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < k; ++j) {

            long long curr = 0;

            for(int l = 0; l < m; ++l) {
                curr += (A[i][l] * 1LL * B[l][j]) % MOD;
            }

            res[i][j] = curr % MOD;
        }
    }

    return res;
}

vector<vector<int> > matrix_expo(vector<vector<int> >& A, int k) {
  int n = A.size();

  vector<vector<int> > res(n, vector<int>(n)), B = A;

  for(int i = 0; i < n; i++)
    res[i][i] = 1;

  while(k) {
    if(k & 1)
        res = multiply(res, B);

    k >>= 1;
    B = multiply(B, B);
  }

  return res;
}

void solve() {

    int a, b, n;
    cin >> a >> b >> n;

    if (n == 1) {
        cout << b;
        return;
    }

    vector<vector<int> > transform_mat =
    {
        {1,1},
        {1,0}
    };

    vector<vector<int> > base_mat({
        {b},
        {a}
    });

    vector<vector<int> > result = matrix_expo(transform_mat, --n);
    result = multiply(result, base_mat);

    cout << result[0][0];
}

int main() {

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
        cout << '\n';
    }

    return 0;
}
