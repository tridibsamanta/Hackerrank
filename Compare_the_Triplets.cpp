/**
 * Title   : Compare_the_Triplets.cpp
 * Author  : Tridib Samanta
 * Created : 26-11-2019
 * Link    : https://www.hackerrank.com/challenges/compare-the-triplets/problem
 **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[3], b[3];
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    int ascore = 0, bscore = 0;
    for (int i=0; i<3; i++)
        if (a[i] > b[i])
            ascore++;
        else if (a[i] < b[i])
            bscore++;
    printf("%d %d\n",ascore,bscore);
    return 0;
}
