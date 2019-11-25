/**
 * Title   : Plus_Minus.cpp
 * Author  : Tridib Samanta
 * Created : 26-11-2019
 * Link    : https://www.hackerrank.com/challenges/plus-minus/problem
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

int main()
{
    int n;
    scanf("%d",&n);
    int p=0,m=0,z=0; // +, -, 0
    for (int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        if (x>0)
            p++;
        else if (x==0)
            z++;
        else
            m++;
    }
    printf("%.3lf\n%.3lf\n%.3lf\n",p*1.0/n,m*1.0/n,z*1.0/n);
}
