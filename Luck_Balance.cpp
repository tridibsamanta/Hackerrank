/**
 * Title   : Luck Balance
 * Author  : Tridib Samanta
 * Created : 02-07-2020
 * Link    : https://www.hackerrank.com/challenges/luck-balance/problem
 **/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> wins;
    int winLuck = 0, loseLuck = 0;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (b) {
            wins.push_back(a);
            winLuck += a;
        }
        else {
            loseLuck += a;
        }
    }

    if (k >= wins.size()) {
        cout << loseLuck + winLuck << '\n';
        return 0;
    }


    sort(wins.begin(), wins.end(), greater<int>());

    int winAdd = 0;
    for (int i = 0; i < k; ++i)
        winAdd += wins[i];

    int maxLuck = loseLuck + winAdd - (winLuck - winAdd);
    cout << maxLuck << '\n';

    return 0;
}
