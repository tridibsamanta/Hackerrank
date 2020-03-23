/**
 * Title   : Append_and_Delete.cpp
 * Author  : Tridib Samanta
 * Created : 24-03-2020
 * Link    : https://www.hackerrank.com/challenges/append-and-delete/problem
 **/

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin>> s >> t;
    int k;
    cin >> k;

    int i;
    for(i = 0; i < min(s.size(),t.size()); i++) {
        if (s[i] != t[i])
            break;
    }

    int diff = s.size() - i + t.size() - i;
    ( k >= s.size() + t.size() || (k >= diff && (k - diff) % 2 == 0) ) ? (cout<<"Yes\n") : (cout<<"No\n");

    return 0;
}





