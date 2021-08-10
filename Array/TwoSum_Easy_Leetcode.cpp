#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& v, int t ) {
	unordered_map<int, int > map ;

	vector<int> ans;
	for (int i = 0 ; i < v.size(); i++) {
		int neededNum = t - v[i];
		if (map.find(neededNum) != map.end()) {

			ans.push_back(map[neededNum]);
			ans.push_back(i);
			return ans;
		}
		map[v[i]] =  i;


	}

	return ans;
}

int main() {
	vector<int> v;
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	int t;
	cin >> t;
	vector<int> ans;
	ans = twoSum(v, t);
	for (int a  : ans)cout << a;

}