/**
 * Title   : Jumping on the Clouds
 * Author  : Tridib Samanta
 * Created : 23-04-2020
 * Link    : https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
 **/

#include<bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int c[n];
    for (int i = 0; i < n; ++i)
        cin >> c[i];

    int pos = 0, jumps = 0;

    while (pos < n - 1) {
        if (c[pos] != 0)
            --pos;
        else {
            pos += 2;
            ++jumps;
        }
    }

    cout << jumps;

    return 0;
}


