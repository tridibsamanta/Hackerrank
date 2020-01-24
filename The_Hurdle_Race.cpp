/**
 * Title   : The_Hurdle_Race.cpp
 * Author  : Tridib Samanta
 * Created : 24-01-2020
 * Link    : https://www.hackerrank.com/challenges/the-hurdle-race/problem
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

    int n,k;
    scanf("%d%d",&n,&k);

    int tmp=0,max=0;
    for(int i=0;i<n;i++) {
        scanf("%d",&tmp);
        if(tmp>max)
            max=tmp;
    }
    if(max<=k)
        printf("0\n");
    else
        printf("%d\n",(max-k));

    return 0;
}

