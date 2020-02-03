/**
 * Title   : Beautiful_Days_at_the_Movies.cpp
 * Author  : Tridib Samanta
 * Created : 04-02-2020
 * Link    : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
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

    long int i,j,d,cnt=0;
    scanf("%ld%ld%ld",&i,&j,&d);

    for(long int k=i;k<=j;k++) {
        long int num=k,rev_k=0,rem=0;
        while(num!=0) {
            rem=num%10;
            rev_k=rev_k*10+rem;
            num/=10;
        }
        if(abs(k-rev_k)%d==0)
            cnt++;
    }
    printf("%ld\n",cnt);
    return 0;
}

