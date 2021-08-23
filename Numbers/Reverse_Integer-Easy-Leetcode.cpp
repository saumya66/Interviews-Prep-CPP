/*
7. Reverse Integer
Easy

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);   //Converting to string
        if (s[0] == '-') {          //Removing - if the number is negative
            int pos = s.find('-');
            s = s.substr(pos + 1);
        }

        bool firstDigit = false;
        string ans;
        for (int i = s.length() - 1; i >= 0; --i) {

            if (s[i] != '0')firstDigit = true;
            if (!firstDigit && s[i] == '0')continue;    //Condition to skip concat if the first digits are 0
            else {
                ans += s[i];
            }
        }
        stringstream hi(ans);
        long int num = 0;
        hi >> num;                                   //Converting string to int
        if (num > INT_MAX || num < INT_MIN)return 0; //Checking for overflow
        if (x < 0) {
            return -num;
        }
        else return num;

    }
};