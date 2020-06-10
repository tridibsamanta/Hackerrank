/**
 * Title   : Is Fibo
 * Author  : Tridib Samanta
 * Created : 11-06-2020
 * Link    : https://www.hackerrank.com/challenges/is-fibo/problem
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> fibo(51);

void computeFibo() {
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 50; ++i)
        fibo[i] = fibo[i-1] + fibo[i-2];
}

int main()
{
    computeFibo();
    int t;
    cin >> t;
    while(t--) {

        ll n;
        cin >> n;

        if(binary_search(fibo.begin(), fibo.end(), n))
            cout << "IsFibo\n";
        else
            cout << "IsNotFibo\n";
    }
    return 0;
}
