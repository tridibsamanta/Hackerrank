/**
 * Title   : Equal
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/equal/problem
**/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> vals(n);

    for (int i = 0; i < n; ++i) {
        cin >> vals[i];
    }

    int min_ele = *min_element(vals.begin(), vals.end());
    int ans = INT_MAX;

    for (int i = 0; i <= 2; ++i) {

        int curr_ops = 0;

        for (int j = 0; j < n; ++j) {

            int diff = vals[j] - min_ele + i;

            curr_ops += diff / 5 + diff % 5 / 2 + diff % 5 % 2 / 1;
        }

        ans = min(ans, curr_ops);
    }

    cout << ans;
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
