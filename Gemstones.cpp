/**
 * Title   : Gemstones
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/gem-stones/problem
**/

#include <bits/stdc++.h>
using namespace std;

int gemstones(vector<string> arr) {

    int n = arr.size();

    if (n == 0)
        return 0;

    bool freq[n][26];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            freq[i][j] = false;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; arr[i][j]; ++j) {
            freq[i][arr[i][j] - 'a'] = true;
        }
    }

    int gemStones = 0;

    for (int i = 0; i < 26; ++i) {
        bool isGem = true;
        for (int j = 0; j < n; ++j) {
            if (!freq[j][i])
                isGem = false;
        }
        if (isGem)
            ++gemStones;
    }

    return gemStones;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
