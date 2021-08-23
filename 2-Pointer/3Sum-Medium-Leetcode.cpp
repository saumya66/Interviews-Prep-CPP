/*
15. 3Sum
Medium

Link : https://leetcode.com/problems/3sum/

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(), nums.begin() + l);
        vector<vector<int>> v;
        for (int i = 0; i < l - 2; i++) {
            if (i > 0)
            {

                while (i < l && nums[i] == nums[i - 1])
                    i++;
            }
            int left = i + 1;
            int right = l - 1;

            while (left < right) {
                int sum = nums[left] + nums[right] + nums[i];
                if (sum < 0) {
                    ++left;
                }
                else if (sum > 0) {
                    --right;
                }
                else if (sum == 0) {
                    v.push_back({nums[left] , nums[right] , nums[i]});
                    int last_left = nums[left], last_right = nums[right];
                    while (left < right && nums[left] == last_left) {
                        left++;
                    }
                    while (left < right && nums[right] == last_right) {
                        --right;
                    }
                }
            }
        }
        return v;
    }
};