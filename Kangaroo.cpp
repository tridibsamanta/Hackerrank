/**
 * Title   : Kangaroo.cpp
 * Author  : Tridib Samanta
 * Created : 30-12-2019
 * Link    : https://www.hackerrank.com/challenges/kangaroo/problem
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
    int x1,v1,x2,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if(v1>v2 && ((x2-x1)%(v1-v2)==0))
        printf("YES");
    else
        printf("NO");
    return 0;
}
