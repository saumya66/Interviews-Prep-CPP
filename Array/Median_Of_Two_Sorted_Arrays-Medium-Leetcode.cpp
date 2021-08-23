#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	map<int, int> m ;

	for (int a : nums1 ) {
		m[a] = 1;
	}
	for (int b : nums2 ) {
		m[b] = 1;
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first;
	}
	return 1;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> v1, v2;
	int n1, n2, x;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> x;
		v1.push_back(x);
	}
	cin >> n2;
	for (int i = 0; i < n2; i++) {
		cin >> x;
		v2.push_back(x);
	}
	double ans = findMedianSortedArrays(v1, v2);
	cout << ans;

}