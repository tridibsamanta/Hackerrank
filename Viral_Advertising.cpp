/**
 * Title   : Viral_Advertising.cpp
 * Author  : Tridib Samanta
 * Created : 13-02-2020
 * Link    : https://www.hackerrank.com/challenges/strange-advertising/problem
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
    scanf("%d",&n);

    int liked=0,shared=5,cumulative=0;
    for(int i=1;i<=n;i++) {
        liked=floor(shared/2);
        cumulative+=liked;
        shared=liked*3;
    }
    printf("%d\n",cumulative);
    return 0;
}

