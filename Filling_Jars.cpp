/**
 * Title   : Filling Jars
 * Author  : Tridib Samanta
 * Created : 11-06-2020
 * Link    : https://www.hackerrank.com/challenges/filling-jars/problem
 **/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a, b, k;
    long total = 0, average = 0;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> k;
        total += (long)((b - a) + 1) * k;
    }

    average = total / n;
    cout << average << '\n';

    return 0;
}
