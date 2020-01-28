/**
 * Title   : Designer_PDF_Viewer.cpp
 * Author  : Tridib Samanta
 * Created : 28-01-2020
 * Link    : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
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

    int height[26];
    for(int i=0;i<26;i++) {
        scanf("%d",&height[i]);
    }

    string word;
    cin>>word;


    int max_height=0;
    for(int j=0;j<word.length();j++)
    {
        int asc = word[j];
        if(height[asc-97]>max_height)
            max_height=height[asc-97];
    }
    int area=0;
    area=max_height*word.length();

    printf("%d\n",area);


    return 0;
}

