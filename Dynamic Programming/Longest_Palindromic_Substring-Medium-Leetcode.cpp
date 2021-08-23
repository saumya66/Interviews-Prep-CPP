
/*
Longest Substring Without Repeating Characters

Medium

Given a string s, find the length of the longest substring without repeating characters.

*/
#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
	int l = s.length();
	int dp[l][l];
	int start = 0, mx = 0;
	for (int i = 0; i < l; i++) {
		dp[i][i] = 1;
	}
	for (int i = 0; i < l - 1; i++) {

		if (s[i] == s[i + 1])dp[i][i + 1] = 1;
		else dp[i][i + 1] = 0;
	}
	for (int i = 0; i < l ; i++) {
		for (int j = i ; j < l ; i++) {
			if (s[i] == s[j] && dp[i + 1][j - 1] == 1) {
				dp[i][j] = 1;
			}
			else {
				dp[i][j] = 0;

			}

			if (dp[i][j] == 1) {

				start = i;
				mx  = max(mx, j - i + 1);
			}
		}
	}
	cout << start + 1 << "ma" << start +  mx;
	return "a";
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s ;
	cin >> s;
	cout << "ff";
	cout << longestPalindrome(s);
}