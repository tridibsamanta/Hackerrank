/**
 * Title   : Time_Conversion.cpp
 * Author  : Tridib Samanta
 * Created : 17-12-2019
 * Link    : https://www.hackerrank.com/challenges/time-conversion/problem
 **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
char time[20];
    scanf("%s",time);
    //Check for 12:00:00AM and 12:00:00PM
    if (time[0] == '1' && time[1] == '2')
        time[0] = time[1] = '0';
    //Check for all times in PM and add 12 hours
    if (time[8] == 'P')
    {
        time[0] += 1;
        time[1] += 2;
    }
    //Remove the AM, PM part from the string
    time[8] = '\0';
    //For 08:00:00PM and 09:00:00PM as 8+2=10 and 9+2=11, both >9
    if (time[1] > '9')
    {
        time[0] +=1;
        time[1] -=10;
    }
    printf("%s\n",time);
    return 0;
}
