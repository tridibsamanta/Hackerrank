/**
 * Title   : Sherlock_and_Array.cpp
 * Author  : Tridib Samanta
 * Created : 25-11-2019
 * Link    : https://www.hackerrank.com/challenges/simple-array-sum/problem
 **/

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        sum+=a;
    }
    printf("%d",sum);
}
