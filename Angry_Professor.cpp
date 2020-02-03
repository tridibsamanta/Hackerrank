/**
 * Title   : Angry_Professor.cpp
 * Author  : Tridib Samanta
 * Created : 03-02-2020
 * Link    : https://www.hackerrank.com/challenges/angry-professor/problem
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

    int T;
    scanf("%d",&T);

    while(T--) {
            int n,k;
            scanf("%d%d",&n,&k);
            for(int i=0;i<n;i++) {
                int tmp;
                scanf("%d",&tmp);
                if(tmp<=0)
                    k--;
            }
            if(k<=0)
                printf("NO\n");
            else
                printf("YES\n");
        }
    return 0;
}

