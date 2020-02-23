/**
 * Title   : Circular_Array_Rotation.cpp
 * Author  : Tridib Samanta
 * Created : 23-02-2020
 * Link    : https://www.hackerrank.com/challenges/circular-array-rotation/problem
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

    int n,k,q,m;
    scanf("%d%d%d",&n,&k,&q);
    k=k%n;
    int arr[n];
    for(int i=k;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<k;i++)
        scanf("%d",&arr[i]);
    while(q--) {
        scanf("%d",&m);
        printf("%d\n",arr[m]);
    }
    return 0;
}

/*
ALTERNATIVE SOLUTION

k=k%n;
for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
for(int i = 0; i < q; i++){
        scanf("%d",&m);
        if(m-k >= 0)
            printf("%d\n",ar[m-k]);
        else
            printf("%d\n",ar[m-k+n]);
 }
*/

