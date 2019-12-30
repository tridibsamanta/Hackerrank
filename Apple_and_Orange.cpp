/**
 * Title   : Apple_and_Orange.cpp
 * Author  : Tridib Samanta
 * Created : 30-12-2019
 * Link    : https://www.hackerrank.com/challenges/apple-and-orange/problem
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
    int s,t;
    //Take input the starting and ending position of the house
    scanf("%d%d",&s,&t);
    int a,b;
    //Take input the position of apple tree and orange tree
    scanf("%d%d",&a,&b);
    int m,n;
    //Take input the number of apples and oranges
    scanf("%d%d",&m,&n);
    int apple_count=0,orange_count=0;
    //The number of apples that fall  on Sam's House
    for(int i=0;i<m;i++) {
        int apple_dist=0,landing_pos=0;
        scanf("%d",&apple_dist);
        landing_pos=a+apple_dist;
        if(landing_pos>=s && landing_pos<=t)
            apple_count++;
    }
    //The number of oranges that fall  on Sam's House
    for(int i=0;i<n;i++) {
        int orange_dist=0,landing_pos=0;
        scanf("%d",&orange_dist);
        landing_pos=b+orange_dist;
        if(landing_pos>=s && landing_pos<=t)
            orange_count++;
    }
    printf("%d\n%d\n",apple_count,orange_count);
    return 0;
}
