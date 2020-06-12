/**
 * Title   : Halloween Sale
 * Author  : Tridib Samanta
 * Created : 13-06-2020
 * Link    : https://www.hackerrank.com/challenges/halloween-sale/problem
 **/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int p, d, m, s;
    cin >> p >> d >> m >> s;

    if (s < p) {
        cout << 0 << '\n';
        return 0;
    }

    int res = 0;

    while (s >= p) {
        if (p < m)
            break;
        else
            s -= p;
        ++res;
        p -= d;
    }

    if (s >= p && s >= m)
        res += (int)(s / m);

    cout << res << '\n';

    return 0;
}
