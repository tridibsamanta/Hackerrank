/**
 * Title   : Cats_and_a_Mouse.cpp
 * Author  : Tridib Samanta
 * Created : 19-12-2019
 * Link    : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
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
    int q;
    scanf("%d",&q);
    int x,y,z,d;
    while(q--) {
        scanf("%d%d%d",&x,&y,&z);
        if(abs(z-x) < abs(z-y))
            printf("Cat A\n");
        else if (abs(z-y) < abs(z-x))
            printf("Cat B\n");
        else
            printf("Mouse C\n");
    }
    return 0;
}
