/**
 * Title   : Prime Sum
 * Author  : Tridib Samanta
 * Link    : https://www.hackerrank.com/challenges/prime-sum/problem
**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll mod_mul(ll a, ll b, ll m) {
    ll res = 0;
    ll y = a % m ;

    while (b > 0) {
        if (b & 1)
            res = (res + y) % m ;

        y = (y + y) % m;
        b >>= 1;
    }

    return res % m ;
}

ll mod_expo(ll a, ll p, ll m) {
    ll res = 1;
    ll y = a % m ;

    while ( p > 0 ) {
        if (p & 1)
            res = mod_mul(res, y, m) ;

        y = mod_mul(y, y, m);
        p >>= 1;
    }

    return res % m ;
}

bool miller_rabin(ll p, ll iter)
{
    if (p < 2)
        return false ;

    if (p % 2 == 0 && p != 2)
        return false ;

    ll s = p - 1 ;
    while (s % 2 == 0) {
        s >>= 1;
    }

    for (ll i = 1; i <= iter; ++i) {
        ll a = rand() % (p - 1) + 1;
        ll temp = s ;

        ll m1 = mod_expo(a, temp, p);

        while (m1 != 1 && m1 != p - 1 && temp != p - 1) {
            m1 = mod_mul(m1, m1, p);
            temp *= 2;
        }

        if (temp % 2 == 0 && m1 != p - 1)
            return false ;
    }

    return true ;
}

int main() {

    int tc;
    cin >> tc;

    while (tc--) {

        ll n, k;
        cin >> n >> k;

        if (n < (2 * k)) {
            cout << "No" << '\n';
            continue;
        }

        if (k == 1) {
            cout << (miller_rabin(n, 5) ? "Yes" : "No") << '\n';
        }
        else if (k == 2) {
            if (n % 2 == 0)
                cout << "Yes" << '\n';
            else {
                cout << (miller_rabin(n - 2, 5) ? "Yes" : "No") << '\n';
            }
        }
        else {
            cout << "Yes" << '\n';
        }
    }

    return 0;
}
