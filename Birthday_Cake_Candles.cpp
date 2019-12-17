/**
 * Title   : Birthday_Cake_Candles.cpp
 * Author  : Tridib Samanta
 * Created : 17-12-2019
 * Link    : https://www.hackerrank.com/challenges/birthday-cake-candles/problem
 **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int max_height=-1,freq=0;
    scanf("%d",&n); //No. of candles on the cake
    int ar[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&ar[i]); //Storing the height of each candle

        //Check if a particular height is the max., start counting from 1
        if(ar[i]>max_height) {
            max_height=ar[i];
            freq = 1;
        }
        //If present height is the max., increment counter
        else if(ar[i]==max_height)
            freq++;
    }
    printf("%d",freq); //No. of candles with max. height
    return 0;
}
