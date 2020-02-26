/**
 * Title   : Sequence_Equation.cpp
 * Author  : Tridib Samanta
 * Created : 26-02-2020
 * Link    : https://www.hackerrank.com/challenges/permutation-equation/problem
 **/

#include<bits/stdc++.h>
using namespace std;

int indexof[51];

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        int t;
        scanf("%d",&t);
        indexof[t]=i;
    }
    for(int i=1;i<=n;i++)
        printf("%d\n",indexof[indexof[i]]);
    return 0;
}
