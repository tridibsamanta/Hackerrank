/**
 * Title   : Diagonal_Difference.cpp
 * Author  : Tridib Samanta
 * Created : 26-11-2019
 * Link    : https://www.hackerrank.com/challenges/diagonal-difference/problem
 **/

#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int mat[100][100];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    int sum1=0,sum2=0;
    for (int i=0;i<n;i++)
    {
        sum1 += mat[i][i];
        sum2 += mat[i][n-1-i];
    }
    printf("%d\n",abs(sum1-sum2));
}
