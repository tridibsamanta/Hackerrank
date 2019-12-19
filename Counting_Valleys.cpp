/**
 * Title   : Counting_Valleys.cpp
 * Author  : Tridib Samanta
 * Created : 19-12-2019
 * Link    : https://www.hackerrank.com/challenges/counting-valleys/problem
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
    int n,height=0,valley_count=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(int i=0;i<n;i++) {
        if(str[i]=='U') {
            height++;
            if(height==0)
                valley_count++;
        }
        else
            height--;
    }
    printf("%d\n",valley_count);
    return 0;
}
