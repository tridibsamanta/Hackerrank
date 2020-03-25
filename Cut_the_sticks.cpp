/**
 * Title   : Cut_the_sticks.cpp
 * Author  : Tridib Samanta
 * Created : 25-03-2020
 * Link    : https://www.hackerrank.com/challenges/cut-the-sticks/problem
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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>> arr[i];
    }
    sort(arr,arr+n);
    printf("%d\n", n);
    for(int i = 0; i < n;) {
        int cut_len = arr[i];
        while(arr[i] == cut_len)
            i++;
        if(n != i)
            printf("%d\n", n-i);
    }
    return 0;
}





