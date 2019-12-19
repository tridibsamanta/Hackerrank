/**
 * Title   : Electronics_Shop.cpp
 * Author  : Tridib Samanta
 * Created : 19-12-2019
 * Link    : https://www.hackerrank.com/challenges/electronics-shop/problem
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
    int b,n,m;
    scanf("%d%d%d",&b,&n,&m);
    int keyboard[n],usb_drive[m];
    for(int i=0;i<n;i++)
        scanf("%d",&keyboard[i]);
    for(int j=0;j<m;j++)
        scanf("%d",&usb_drive[j]);
    int max_cost=-1;
    for(int k=0;k<n;k++) {
        for(int l=0;l<m;l++) {
             if((keyboard[k]+usb_drive[l])<=b && (keyboard[k]+usb_drive[l])>max_cost)
                max_cost=keyboard[k]+usb_drive[l];
        }
    }
    printf("%d\n",max_cost);
    return 0;
}
