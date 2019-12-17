/**
 * Title   : Drawing_Book.cpp
 * Author  : Tridib Samanta
 * Created : 17-12-2019
 * Link    : https://www.hackerrank.com/challenges/drawing-book/problem
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
    int n, p;
    scanf("%d %d", &n, &p);
    if (n%2==1)
        n--;
    if (p%2==1)
        p--;
    int turnfromstart = p/2, turnfromend = (n-p)/2;
    printf("%d\n", min(turnfromstart, turnfromend));
    return 0;
}
