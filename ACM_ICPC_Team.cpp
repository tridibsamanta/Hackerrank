/**
 * Title   : ACM ICPC Team
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/acm-icpc-team/problem
**/

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, vector<vector<string> >& topics) {

    int countPairs = 0, maxTopicCount = INT_MIN;

    for (int i = 0; i < n; ++i) {

        string attendee1 = topics[i][0];

        for (int j = i + 1; j < n; ++j) {

            string attendee2 = topics[j][0];
            int currTopicCount = 0;

            for (int k = m - 1; k >= 0; --k) {
                if (attendee1[k] - '0' || attendee2[k] - '0' == 1)
                    ++currTopicCount;
            }

            if (currTopicCount > maxTopicCount)
                maxTopicCount = currTopicCount;
        }
    }

    for (int i = 0; i < n; ++i) {

        string attendee1 = topics[i][0];

        for (int j = i + 1; j < n; ++j) {

            string attendee2 = topics[j][0];
            int currTopicCount = 0;

            for (int k = m - 1; k >= 0; --k) {
                if (attendee1[k] - '0' || attendee2[k] - '0' == 1)
                    ++currTopicCount;
            }

            if (currTopicCount == maxTopicCount)
                ++countPairs;
        }
    }

    cout << maxTopicCount << '\n' << countPairs << '\n';

}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<string> > topics(n);

    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        topics[i].emplace_back(str);
    }

    solve(n, m, topics);

    return 0;

}
