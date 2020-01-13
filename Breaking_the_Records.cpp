/**
 * Title   : Breaking_the_Records.cpp
 * Author  : Tridib Samanta
 * Created : 13-01-2020
 * Link    : https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
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
    int n,min_count=0,max_count=0;
    scanf("%d",&n);
    unsigned long int record=0,score=0,min_record=0;
    scanf("%lu",&record);
    min_record=record;
    for(int i=0;i<n-1;i++) {
        scanf("%lu",&score);
        if(score>record) {
            record=score;
            max_count++;
        }
        if(score<min_record) {
            min_record=score;
            min_count++;
        }
    }
    printf("%lu %lu",max_count,min_count);
    return 0;
}
