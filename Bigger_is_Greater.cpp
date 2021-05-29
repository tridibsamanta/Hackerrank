/**
 * Title   : Bigger is Greater
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/bigger-is-greater/problem
**/

#include <bits/stdc++.h>
using namespace std;

string biggerIsGreater(string s) {

    return next_permutation(s.begin(), s.end()) ? s : "no answer";
}

int main() {

    int tc;
    cin >> tc;

    while(tc--) {

        string word;
        cin >> word;

        cout << biggerIsGreater(word) << '\n';
    }

    return 0;
}
