/**
 * Title   : Extra_Long_Factorials.cpp
 * Author  : Tridib Samanta
 * Created : 24-03-2020
 * Link    : https://www.hackerrank.com/challenges/extra-long-factorials/problem
 **/

#include <bits/stdc++.h>
using namespace std;

void extraLongFactorials(int n) {
    vector<int> result;
    result.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        for (auto &digit : result)
            digit = digit * i;
        int carry = 0;
        for (auto &digit : result)
        {
            digit += carry;
            if (digit > 9)
            {
                int new_digit = digit % 10;
                carry = digit / 10;
                digit = new_digit;
            }
            else carry = 0;
        }
        while (carry)
        {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    for (vector<int>::reverse_iterator rit = result.rbegin(); rit != result.rend(); rit++)
        cout << *rit;
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}


