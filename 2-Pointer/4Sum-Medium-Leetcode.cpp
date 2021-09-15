// 18. 4Sum
// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int l = nums.size();
         vector<vector<int>> v;
        if (l < 4) {
		return v;
    	}
        sort(nums.begin(), nums.end());
        for(int i=0;i<l-3 ;i++){
    
//while(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<l-2;j++)
            {
           // while(j>i+1 && nums[j]==nums[j-1])continue; 
            int remainder= target-(nums[i]+nums[j]);
            int left = j+1;
            int right = l-1;
            while(left<right){
                 
                  int  sum = nums[left] + nums[right];
               if(sum==remainder) {
                    v.push_back({ nums[i],nums[j],nums[left],nums[right]});
                   int last_left = nums[left], last_right = nums[right];
                    while(left < right && nums[left] == last_left) ++left;
                        
                         while(left < right && nums[right] == last_right) --right;
                }
                else if(sum<remainder){
                    ++left;
                }
                else if(sum>remainder){
                    --right;
                }
                 
            }
                 while(j + 1 < l && nums[j + 1] == nums[j]) ++j;
        }
       while(i + 1 < l && nums[i + 1] == nums[i]) ++i;

     }
            return v;
    }
};