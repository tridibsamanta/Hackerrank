/**
 * Title   : Modified Kaprekar Numbers
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/kaprekar-numbers/problem
**/

#include <bits/stdc++.h>
using namespace std;

int _stoi(string s) {
    int n = 0;
    for (int i = 0; i < s.length(); ++i)
        n = (n * 10) + (s[i] - '0');
    return n;
}

bool isModifiedKaprekar(int n) {

    long n_sq = 1L * n * n;

    string s = to_string(n_sq);

    int d = s.length() / 2;

    string left = s.substr(0, d);
    string right = s.substr(d);

    int num_l = _stoi(left);
    int num_r = _stoi(right);

    return ((num_l + num_r == n) ? true : false);
}

int main() {

    int p, q;
    cin >> p >> q;

    bool flag = false;

    for(int i = p; i <= q; ++i) {
        if (isModifiedKaprekar(i)) {
            cout << i << ' ';
            flag = true;
        }
    }

    if (!flag)
        cout << "INVALID RANGE";

    return 0;
}
