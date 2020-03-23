/**
 * Title   : Find_Digits.cpp
 * Author  : Tridib Samanta
 * Created : 23-03-2020
 * Link    : https://www.hackerrank.com/challenges/find-digits/problem
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

    int t;
    cin>> t;

    while(t--) {
        int n, digit, c = 0;
        cin>> n;
        int temp = n;
        while(temp != 0) {
            digit = temp % 10;
            if (digit > 0 && n % digit == 0)
                c++;
            temp = temp / 10;
        }
        cout<< c << "\n";
    }
    return 0;
}


