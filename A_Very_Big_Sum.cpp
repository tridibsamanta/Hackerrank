/**
 * Title   : A_Very_Big_Sum.cpp
 * Author  : Tridib Samanta
 * Created : 26-11-2019
 * Link    : https://www.hackerrank.com/challenges/a-very-big-sum/problem
 **/

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n,x;
    long long sum;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&x);
        sum+= x;
    }
    printf("%lld\n",sum);
    return 0;
}
