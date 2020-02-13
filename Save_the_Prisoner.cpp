/**
 * Title   : Save_the_Prisoner.cpp
 * Author  : Tridib Samanta
 * Created : 13-02-2020
 * Link    : https://www.hackerrank.com/challenges/save-the-prisoner/problem
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

    int t;
    scanf("%d",&t);
    while(t--) {
        int n,m,s;
        scanf("%d%d%d",&n,&m,&s);
        int pos=(m+s-2)%n+1;
        printf("%d\n",pos);
    }
    return 0;
}

