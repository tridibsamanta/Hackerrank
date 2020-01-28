/**
 * Title   : Utopian_Tree.cpp
 * Author  : Tridib Samanta
 * Created : 28-01-2020
 * Link    : https://www.hackerrank.com/challenges/utopian-tree/problem
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
        int n;
        scanf("%d",&n);

        int height=1;

        for(int i=1;i<=n;i++) {
            if(i%2!=0)
                height*=2;
            else
                height++;
        }
        printf("%d\n",height);
    }
    return 0;
}

