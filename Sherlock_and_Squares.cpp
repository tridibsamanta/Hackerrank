/**
 * Title   : Sherlock_and_Squares.cpp
 * Author  : Tridib Samanta
 * Created : 24-03-2020
 * Link    : https://www.hackerrank.com/challenges/sherlock-and-squares/problem
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

    int q;
    cin>> q;

    while(q--) {
        int a,b;
        cin>> a >> b;

        int total = 0;

        int shuru = sqrt(a);
        int khatam = sqrt(b);

        if(shuru * shuru == a && khatam * khatam == b)
            total = (khatam-shuru) + 1;
        else if(shuru * shuru != a && khatam * khatam == b)
            total = khatam - shuru;
        else if(shuru * shuru == a && khatam * khatam != b)
            total = (khatam - shuru) + 1;
        else
            total = khatam - shuru;

        cout<< total << "\n";
    }

    return 0;
}





