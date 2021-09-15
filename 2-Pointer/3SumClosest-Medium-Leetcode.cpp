// 16. 3Sum Closest
 
// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.
//Link : https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int l = nums.size();
        sort(nums.begin(),nums.begin()+l); 
        vector<int> v;
         for(int i=0;i<l-2;i++){
            int a = nums[i];
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int left = i+1;          //Assigning the left pointer 
            int right = l-1;        //Assigning the right pointer 
             while(left<right){
                int sum = nums[left]+ nums[right]+ nums[i];       //Sum of the 3 pointers
                if(sum<target){      //Sum<target then increase the left pointer to increse the sum
                    ++left;
                }
                else if (sum>target){ //Sum>target then increase the left pointer to decrease the sum
                    --right;
                }
                else {
                    return sum;      //Sum==target then it's the most closes you come so that's it return !
                }
                v.push_back(sum);   //Keeping the 3sums for find the most closes later 
             }
            
        }
        int mn=INT_MAX; 
        int ans=0;
        for(int a : v){
             
            if(abs(target-a)<mn){        //Checking which sum is the most closes to target 
                mn=abs(target-a);
                ans=a;
             }
            
        }
        return ans;
    }
};