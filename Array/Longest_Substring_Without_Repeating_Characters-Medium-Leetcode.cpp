
/*
Longest Substring Without Repeating Characters

Medium

Given a string s, find the length of the longest substring without repeating characters.

*/
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
	unordered_set<char> st;
	int mx = 0;
	int size = 0;
	int i = 0, j = 0;
	int n = s.length();
	while (i < n && j < n) {
		if (st.find(s[j]) != st.end()) {
			st.erase(s[i]);
			++i;
		}
		else {
			st.insert(s[j]);
			++j;
		}
		int size = st.size();
		mx = max(mx, size );

	}

	return mx;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s ;
	cin >> s;
	cout << lengthOfLongestSubstring(s);
}