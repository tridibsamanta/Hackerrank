/**
 * Title   : Repeated String
 * Author  : Tridib Samanta
 * Created : 15-04-2020
 * Link    : https://www.hackerrank.com/challenges/repeated-string/problem
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

	ios::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;

	long long int n;
	cin >> n;

	long long int count = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'a')
			++count;
	}

	long long int rep = n / s.length();

	count = rep * count;
	for (int i = 0; i < n % s.length(); ++i) {
		if (s[i] == 'a')
			++count;
	}

	cout << count << '\n';

	return 0;
}