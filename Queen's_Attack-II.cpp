/**
 * Title   : Queen's Attack II
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/queens-attack-2/problem
**/

#include <bits/stdc++.h>
using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {

    map<pair<int, int>, bool> obsPos;

    for (int i = 0; i < k; ++i) {
        obsPos[{obstacles[i][0], obstacles[i][1]}] = true;
    }

    int count = 0;

    static int rowPos[] = {1, 1, 1, 0, -1, -1, -1, 0};
    static int colPos[] = {-1, 0, 1, 1, 1, 0, -1, -1};

    int currRow = 0, currCol = 0;

    // NW
    currRow = r_q + rowPos[0];
    currCol = c_q + colPos[0];
    while (currRow <= n && currCol >= 1 && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[0];
        currCol += colPos[0];
    }

    // N
    currRow = r_q + rowPos[1];
    currCol = c_q + colPos[1];
    while (currRow <= n && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[1];
        currCol += colPos[1];
    }

    // NE
    currRow = r_q + rowPos[2];
    currCol = c_q + colPos[2];
    while (currRow <= n && currCol <= n && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[2];
        currCol += colPos[2];
    }

    // E
    currRow = r_q + rowPos[3];
    currCol = c_q + colPos[3];
    while (currCol <= n && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[3];
        currCol += colPos[3];
    }

    // SE
    currRow = r_q + rowPos[4];
    currCol = c_q + colPos[4];
    while (currRow >= 1 && currCol <= n && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[4];
        currCol += colPos[4];
    }

    // S
    currRow = r_q + rowPos[5];
    currCol = c_q + colPos[5];
    while (currRow >= 1 && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[5];
        currCol += colPos[5];
    }

    // SW
    currRow = r_q + rowPos[6];
    currCol = c_q + colPos[6];
    while (currRow >= 1 && currCol >= 1 && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[6];
        currCol += colPos[6];
    }

    // W
    currRow = r_q + rowPos[7];
    currCol = c_q + colPos[7];
    while (currCol >= 1 && !obsPos[{currRow, currCol}]) {
        ++count;
        currRow += rowPos[7];
        currCol += colPos[7];
    }

    return count;
}

int main() {

    int n, k;
    cin >> n >> k;

    int r_q, c_q;
    cin >> r_q >> c_q;

    vector<vector<int> > obstacles(k);

    for (int i = 0; i < k; ++i) {
        int r, c;
        cin >> r >> c;
        obstacles[i].emplace_back(r);
        obstacles[i].emplace_back(c);
    }

    int res = queensAttack(n, k, r_q, c_q, obstacles);
    cout << res;

    return 0;
}
