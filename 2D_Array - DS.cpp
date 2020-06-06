/**
 * Title   : 2D Array - DS
 * Author  : Tridib Samanta
 * Created : 07-06-2020
 * Link    : https://www.hackerrank.com/challenges/2d-array/problem
 **/

#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    int currSum = 0, maxSum = INT_MIN;

    for (int r = 0; r < 4; ++r) {

        for (int i = 0; i <= 3; ++i) {

            currSum = 0;

            for (int j = i; j < i + 3; j++) {

                currSum += arr[r][j];
                currSum += arr[r+2][j];
            }
            currSum += arr[r+1][i+1];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
