/**
 * Title   : Maximum Perimeter Triangle
 * Author  : Tridib Samanta
 * Created : 02-07-2020
 * Link    : https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem
 **/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> sticks(n);
    for (int i = 0; i < n; ++i)
        cin >> sticks[i];

    sort(sticks.begin(), sticks.end(), greater<int>());

    int i;
    for (i = 0; i < n - 2; ++i) {
        if (sticks[i] < (sticks[i + 1] + sticks[i + 2]))
            break;
    }

    if (i == n - 2)
        cout << -1;
    else
        cout << sticks[i + 2] << ' ' << sticks[i + 1] << ' ' << sticks[i];

    return 0;
}
