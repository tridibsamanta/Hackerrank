/**
 * Title   : Sherlock and GCD
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/sherlock-and-gcd/problem
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int gcd = arr[0];
    for (int i : arr)
        gcd = __gcd(gcd, i);

    cout << (gcd == 1 ? "YES" : "NO");
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
