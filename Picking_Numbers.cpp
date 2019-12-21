/**
 * Title   : Picking_Numbers.cpp
 * Author  : Tridib Samanta
 * Created : 21-12-2019
 * Link    : https://www.hackerrank.com/challenges/picking-numbers/problem
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
int n;
    int cnt[100] = {0};
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        int t;
        scanf("%d", &t);
        cnt[t]++;
    }
    int maxlen = 0;
    for (int i=1; i<99; i++)
        if (cnt[i] + cnt[i+1] > maxlen) //abs(i-(i+1)) always <= 1, hence store the max. occurrence of two consecutive numbers
            maxlen = cnt[i] + cnt[i+1];
    printf("%d\n", maxlen);
    return 0;
}
