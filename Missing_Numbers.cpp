/**
 * Title   : Missing_Numbers.cpp
 * Author  : Tridib Samanta
 * Created : 05-11-2019
 * Link    : https://www.hackerrank.com/challenges/missing-numbers/problem
 **/

#include <iostream>
using namespace std;

int main() {
    int frequency[100001];
    for(int i = 1; i <= 100000; i++) {
        frequency[i] = 0;
    }
    int n, m;
    cin>>n;
    // Count no. of appearances of a particular no. in list 1
    for(int i = 0; i < n; i++) {
        int tmp;
        cin>>tmp;
        frequency[tmp]++;
    }
    cin>>m;
    // Subtract no. of appearances of a particular no. in list 2
    for(int i = 0; i < m; i++) {
        int tmp;
        cin>>tmp;
        frequency[tmp]--;
    }
    // Any frequency[i] != 0 does not appear the same number of times in each list
    for(int i = 1; i <= 10000; i++) {
        if(frequency[i] != 0) {
            cout<<i<<" ";
        }
    }
    return 0;
}

