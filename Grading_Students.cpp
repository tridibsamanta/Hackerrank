/**
 * Title   : Grading_Students.cpp
 * Author  : Tridib Samanta
 * Created : 30-12-2019
 * Link    : https://www.hackerrank.com/challenges/grading/problem
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
    for(int i=0;i<n;i++) {
        int temp=0,diff=0;
        scanf("%d",&temp);
        diff=5-(temp%5);
        if(temp>37 && diff<3)
            printf("%d\n",temp+diff);
        else
            printf("%d\n",temp);
    }
    return 0;
}
