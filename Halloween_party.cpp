/**
 * Title   : Halloween party
 * Author  : Tridib Samanta
 * Created : 11-06-2020
 * Link    : https://www.hackerrank.com/challenges/halloween-party/problem
 **/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the halloweenParty function below.
 */
long halloweenParty(int k) {

    long pieces = 0;

    if (k & 1) {
        pieces = (long)(k / 2) * (long)(k / 2 + 1);
    }
    else
        pieces = (long)(k / 2) * (long)(k / 2);

    return pieces;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int k;
        cin >> k;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = halloweenParty(k);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
