/**
 * Title   : Mini_Max_Sum.cpp
 * Author  : Tridib Samanta
 * Created : 26-11-2019
 * Link    : https://www.hackerrank.com/challenges/mini-max-sum/problem
 **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a[5];
    long long sum = 0;
    for(int i = 0; i < 5; i++)
   {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+5);
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}
