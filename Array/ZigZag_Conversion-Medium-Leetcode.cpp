/*
6. ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);

*/
class Solution {
public:
    string convert(string s, int n) {
        int l = s.length();
        string arr[n];
        if (n == 1) {
            return s;
        }
        int row = 0;
        bool down = true;
        for (int i = 0; i < l; i++) {
            arr[row].push_back(s[i]);
            if (row == 0) {
                down = true;
            }
            else if (row == n - 1) {
                down = false;
            }
            down ? row++ : --row;
        }
        string ans;

        for (int  i = 0; i < n; i++) {
            ans += arr[i];
        }
        return ans;

    }
};