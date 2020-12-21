/**
 * Title   : Castle on the Grid
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/castle-on-the-grid/problem
**/

#include <bits/stdc++.h>
using namespace std;

static int rPos[] = {-1, 0, 1, 0};
static int cPos[] = {0, 1, 0, -1};

vector<string> split_string(string);

int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {

    int n = grid.size();

    vector<vector<int> > visited(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            visited[i].emplace_back(-1);
        }
    }

    queue<pair<int, int> > q;
    q.push(make_pair(startX, startY));
    visited[startX][startY] = 0;

    while (!q.empty()) {

        pair<int, int> temp = q.front();
        q.pop();

        int currX = temp.first;
        int currY = temp.second;

        for (int k = 0; k < 4; ++k) {

            int adjX = currX + rPos[k];
            int adjY = currY + cPos[k];

            while ((adjX >= 0 && adjX < n) && (adjY >= 0 && adjY < n) && visited[adjX][adjY] == -1 && grid[adjX][adjY] == '.') {

                q.push(make_pair(adjX, adjY));
                visited[adjX][adjY] = visited[currX][currY] + 1;

                if (adjX == goalX && adjY == goalY)
                    return visited[adjX][adjY];

                adjX = adjX + rPos[k];
                adjY = adjY + cPos[k];
            }
        }
    }

    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    string startXStartY_temp;
    getline(cin, startXStartY_temp);

    vector<string> startXStartY = split_string(startXStartY_temp);

    int startX = stoi(startXStartY[0]);

    int startY = stoi(startXStartY[1]);

    int goalX = stoi(startXStartY[2]);

    int goalY = stoi(startXStartY[3]);

    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
