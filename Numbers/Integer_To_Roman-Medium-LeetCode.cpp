/*
12. Integer to Roman
Medium

Link : https://leetcode.com/problems/integer-to-roman/
*/

class Solution {
public:
    const int val[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}; //Declaring constants
    const string rom[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}; //Declaring constants

    string intToRoman(int num) {
        int i = 12;
        string ans;
        for (int i = 12; i >= 0; --i) { //A reverse loop to check the point where the number is greater than the constant as that                                     is the point where we can add respective Roman Number
            if (num >= val[i]) {
                int x = num / val[i]; //Finding the no. of times our number gets divided by the const
                for (int j = 0; j < x; j++) { //As that is the frequency of Roman digits to be appended
                    ans += rom[i];        // which is done here
                }
                num = num % val[i];   // Finding the rest of the number we have to work upon
            }
        }
        return ans;
    };



};