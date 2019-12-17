/**
 * Title   : Bon_Appetit.cpp
 * Author  : Tridib Samanta
 * Created : 17-12-2019
 * Link    : https://www.hackerrank.com/challenges/bon-appetit/problem
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
    int n,k,temp_bill,amt,sum=0,refund;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&temp_bill);
        if(i!=k)
            sum+=temp_bill;
    }
    scanf("%d",&amt);
    refund=amt-(sum/2);
    if(refund!=0)
        printf("%d",refund);
    else
        printf("Bon Appetit");
    return 0;
}
