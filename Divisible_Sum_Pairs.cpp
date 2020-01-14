/**
 * Title   : Divisible_Sum_Pairs.cpp
 * Author  : Tridib Samanta
 * Created : 14-01-2020
 * Link    : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
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
    int n, k;
    scanf("%d %d", &n, &k);
    int a[100];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int cnt = 0;
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
        {
            if ((a[i] + a[j]) % k == 0)
                cnt ++;
        }
    printf("%d\n", cnt);
    return 0;
}
