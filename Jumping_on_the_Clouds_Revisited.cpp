/**
 * Title   : Jumping_on_the_Clouds_Revisited.cpp
 * Author  : Tridib Samanta
 * Created : 23-03-2020
 * Link    : https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
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

    int n,k;
    cin>> n >> k;

    int c[n];
    for(int i = 0; i < n; ++i) {
        cin>> c[i];
    }

    int energy = 100;
    int pos = 0;
    do {
            pos = (pos+k)%n;
            energy -= 1 + c[pos] * 2;
    } while(pos != 0);

    cout<< energy <<"\n";

    return 0;
}


