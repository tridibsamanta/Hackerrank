/**
 * Title   : Birthday_Chocolate.cpp
 * Author  : Tridib Samanta
 * Created : 13-01-2020
 * Link    : https://www.hackerrank.com/challenges/the-birthday-bar/problem
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
    int n;
    scanf("%d",&n);
    int s[n];
    //Store the number on the chocolate squares in an array
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);
    int d,m,ways=0;
    scanf("%d%d",&d,&m);
    //We check if birth month is less equal to no. of squares in the chocolate bar
    if(m<=n) {
    for(int j=0;j<n;j++) {
            //Initialize sum=0 for every iteration of ways count
            int sum=0;
        //We check that does no. of months fit from the starting position of the square consideration every time
        if(j+m<=n) {
                //Iterate from that particular square to the next 'm' no. of square(s)
                for(int k=j;k<j+m;k++) {
                    //Add on the value on the chocolate square with sum for 'm' times
                    sum +=s[k];
                }
                //Check if total sum for an iteration is equal to birth day year
                if(sum==d)
                    //Increase ways count by 1 if condition satisfies
                    ways++;
            }
        }
    }
    //Finally print the total no. of possible ways
    printf("%d",ways);
    return 0;
}
