/**
 * Title   : Balanced Brackets
 * Author  : Tridib Samanta
 * Created : 11-04-2020
 * Link    : https://www.hackerrank.com/challenges/balanced-brackets/problem
 **/

#include<iostream>
#include<stack>
using namespace std;

bool CheckPair(char opening, char closing) {
    if(opening == '(' && closing == ')')
        return true;
    else if(opening == '{' && closing == '}')
        return true;
    else if(opening == '[' && closing == ']')
        return true;
    else
        return false;
}

bool CheckBalancedParenthesis(string exp) {
    stack<char> S;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            S.push(exp[i]);
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(S.empty() || !CheckPair(S.top(),exp[i]))
                return false;
            else
                S.pop();
        }
    }
    return (S.empty()?true:false);
}

int main() {
    int T;
    cin>>T;
    while(T--) {
    string s;
    cin>>s;
    if(CheckBalancedParenthesis(s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
