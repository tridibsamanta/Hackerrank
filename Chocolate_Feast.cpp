/**
 * Title   : Chocolate Feast
 * Author  : Tridib Samanta
 * Created : 22-06-2020
 * Link    : https://www.hackerrank.com/challenges/chocolate-feast/problem
 **/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n, c, m;
        cin >> n >> c >> m;

        int total = n / c;
        int wrappers = total;

        while (wrappers >= m) {
            int exchange = wrappers / m;
            total += exchange;
            wrappers = (wrappers % m) + exchange;
        }

        cout << total << '\n';
    }
    return 0;
}
