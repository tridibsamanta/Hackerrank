/**
 * Title   : Day_of_the_Programmer.cpp
 * Author  : Tridib Samanta
 * Created : 15-01-2020
 * Link    : https://www.hackerrank.com/challenges/day-of-the-programmer/problem
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
    scanf("%d", &n);
    if (n == 1918)
        printf("26.09.1918\n");
    else if (n%400 == 0 || (n%4 == 0 && (n < 1918 || n%100 != 0)))
        printf("12.09.%d\n", n);
    else
        printf("13.09.%d\n", n);
    return 0;
}
