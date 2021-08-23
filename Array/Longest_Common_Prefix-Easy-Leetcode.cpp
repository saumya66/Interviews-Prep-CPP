/*

14. Longest Common Prefix
Easy

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string fs = strs[0];
        int mx = fs.length();
        for ( int i = 1; i < strs.size(); i++) {
            string s = strs[i];
            int x = 0;
            bool flag = 0;
            for (int j = 0; j < min(s.length(), fs.length()); j++) {

                if (   s[j] == fs[j]) {++x; cout << s[j];}
                else {
                    break;
                }
            }
            mx = min(x, mx);
            fs = s.substr(0, mx);

        }
        return strs[0].substr(0, mx);

    }
};