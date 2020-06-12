/**
 * Title   : Minimum Distances
 * Author  : Tridib Samanta
 * Created : 13-06-2020
 * Link    : https://www.hackerrank.com/challenges/minimum-distances/problem
 **/

#include <bits/stdc++.h>
using namespace std;

int minimumDistances(vector<int> a) {

    int res = INT_MAX;

    if (a.size() > 1)
        for (int i = 0; i < a.size() - 1; ++i) {
            for (int j = i + 1; j < a.size(); ++j) {
                if (a[j] == a[i]) {
                    int d = j - i;
                    res = min(res, d);
                    break;
                }
            }
        }

    if (res == INT_MAX)
        return -1;
    else
        return res;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int res = minimumDistances(arr);
    cout << res << '\n';

    return 0;
}
