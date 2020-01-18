/**
 * Title   : Climbing_the_Leaderboard.cpp
 * Author  : Tridib Samanta
 * Created : 18-01-2020
 * Link    : https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
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

int removeDuplicates(int arr[], int n);

int main() {

    //Leaderboard
    int n;
    cin>>n;

    int scores[n];
    for(int i=0;i<n;i++) {
        cin>>scores[i];
    }

    int sof=sizeof(scores)/sizeof(scores[0]);
    sof=removeDuplicates(scores,sof);

    /*for(int i=0;i<sof;i++) {
        cout<<scores[i];
    }*/

    //Alice's Part
    int i=sof-1,m,tmp;
    cin>>m;
    for(int j=0;j<m;j++) {
        cin>>tmp;
        if(tmp<scores[sof-1])
            cout<<sof+1<<endl;
        else if(tmp>scores[0] || tmp==scores[0])
            cout<<"1"<<endl;
        else {
        while(i>0) {
            if(tmp==scores[i]) {
                cout<<i+1<<endl;
                break;}
            if(tmp>scores[i] && tmp<scores[i-1]) {
                cout<<i+1<<endl;
                break; }
            i--;
            }
        }
    }
    return 0;
}

int removeDuplicates(int arr[], int n) {
    if (n==0 || n==1)
        return n;

    int j = 0;
    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];

    arr[j++] = arr[n-1];

    return j;
}
