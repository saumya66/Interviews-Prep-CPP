/*
9. Palindrome Number
Easy

Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.
*/


class Solution {
public:
    bool isPalindrome(int a) {
        if (a < 0 )return false;
        long int n = a;       //Storing a variable for later comparision
        long int x = a;       //Variable to work upon
        long int rev = 0;     //Varable to contain the reversed number
        while (x > 0) {
            int r = x % 10;
            rev = rev * 10 + r;
            x = x / 10;
        }
        if (rev == n)return true;
        else return false;

    }
};