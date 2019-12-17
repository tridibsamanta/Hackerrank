/**
 * Title   : Sock_Merchant.cpp
 * Author  : Tridib Samanta
 * Created : 17-12-2019
 * Link    : https://www.hackerrank.com/challenges/sock-merchant/problem
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
    int n,color;
    scanf("%d",&n);
    map<int,int> m;
    for(int i=0;i<n;i++) {
       scanf("%d",&color);
       m[color]++;
    }
    int c=0;
    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        c+=itr->second/2;

    printf("%d\n",c);
    return 0;
}
