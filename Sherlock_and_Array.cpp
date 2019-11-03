/**
 * Title   : Sherlock_and_Array.cpp
 * Author  : Tridib Samanta
 * Created : 03-11-2019
 * Link    : https://www.hackerrank.com/challenges/sherlock-and-array/problem
 **/

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        scanf("%d",&n);
        int arr[100000];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int lsum=0,rsum=0;
        for(int i=1;i<n;i++)
            rsum += arr[i];
        int flag = (lsum==rsum);
        for (int i=1;i<n-1;i++)
        {
            lsum += arr[i-1];
            rsum -= arr[i];
            if(lsum == rsum)
            {
                flag = 1;
                break;
            }
        }
        printf("%s\n",flag?"YES":"NO");
    }
    return 0;
}
