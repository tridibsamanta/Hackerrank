/**
 * Title   : Library_Fine.cpp
 * Author  : Tridib Samanta
 * Created : 24-03-2020
 * Link    : https://www.hackerrank.com/challenges/library-fine/problem
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

    int d1,m1,y1,d2,m2,y2;
    cin>> d1 >> m1 >> y1;
    cin>> d2 >> m2 >> y2;

    int fine;

    if(y1 > y2)
        fine = 10000;
    else if (y1 == y2) {
        if(m1 > m2)
            fine = 500 * (m1 - m2);
        else if(m1 == m2)
            (d1 <= d2) ? (fine = 0) : (fine = 15 * (d1 - d2));
        else
            fine = 0;
    }
    else
        fine = 0;

    cout<< fine << "\n";

    return 0;
}





