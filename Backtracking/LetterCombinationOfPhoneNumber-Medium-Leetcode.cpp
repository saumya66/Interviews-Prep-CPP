// 17. Letter Combinations of a Phone Number

// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

// A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

class Solution {
public:
     unordered_map<char,vector<string> > m ;
    vector<string> ans;
        void backtrack(string digits,  int index, string currStr ){
        if(index==digits.length())
        {
            ans.push_back(currStr);
            return;
        }
        vector<string> s = m[digits[index]];
        for(int i=0;i<s.size();i++){
            currStr+=s[i];
            backtrack(digits, index+1, currStr );
            currStr.pop_back();
        }
         
    }
    vector<string> letterCombinations(string digits) {
         if(digits.length()==0)
        {
            return {};
        }
	
	m['2'] = {"a","b","c"};
	m['3'] = {"d","e","f"};
	m['4'] = {"g","h","i"};
	m['5'] = {"j","k","l"};
	m['6'] = {"m","n","o"};
	m['7'] = {"p","q","r","s"};
	m['8'] = {"t","u","v"};
	m['9'] = {"w","x","y","z"};
        
         backtrack(digits, 0,"" );
        return ans;
    }

};