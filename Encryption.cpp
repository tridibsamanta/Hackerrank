/**
 * Title   : Encryption
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/encryption/problem
**/

#include<bits/stdc++.h>
using namespace std;

string getEncryptedString(string s) {

    string s1 = "";

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ')
            s1.push_back(s[i]);
    }
    // O(s.length)

    int n = s1.length();
    int r = floor(sqrt(n));
    int c = ceil(sqrt(n));

    string ans = "";

    for (int i = 0; i < c; ++i) {
        int row = 0;
        for (int j = i; j < n; j += c) {
            int curr = (row * c) + i + 1;
            if (curr <= n)
                ans.push_back(s1[curr - 1]);
            ++row;
        }
        ans.push_back(' ');
    }
    // O(c * r)

    return ans;
}

int main() {

    string s;
    cin >> s;

    string ans = getEncryptedString(s);
    cout << ans;

    return 0;
}
