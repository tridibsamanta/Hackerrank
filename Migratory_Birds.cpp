/**
 * Title   : Migratory_Birds.cpp
 * Author  : Tridib Samanta
 * Created : 14-01-2020
 * Link    : https://www.hackerrank.com/challenges/migratory-birds/problem
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
    int n,bird;
    scanf("%d",&n);

    map<int,int> m;

    for(int i=0;i<n;i++) {
        scanf("%d",&bird);
        m[bird]++;
    }

    int max_count=-1,max_type=-1;

    map<int,int>::iterator itr;

    for(itr=m.begin();itr!=m.end();itr++) {
        if((itr->second) > max_count) {
            max_type=itr->first;
            max_count=itr->second;
        }
    }
    printf("%d\n",max_type);

    return 0;
}
