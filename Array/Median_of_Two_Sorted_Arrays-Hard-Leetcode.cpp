/*
Median of Two Sorted Arrays

Hard

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

*/
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int n1 = nums1.size();
		int n2 = nums2.size();

		if (n1 > n2) return findMedianSortedArrays(nums2, nums1); //Recursing to always work of the smallest sized array

		int low = 0;
		int high = n1;

		while (low <= high)  //Basic Binary Search condition
		{
			int mid1 = (low + high) / 2;         //Formula for finding the First Cut
			int mid2 = (n1 + n2 + 1) / 2 - mid1;   //Formula for finding the Second Cut

			int l1 = (mid1 - 1 < 0) ? INT_MIN : nums1[mid1 - 1]; //Handling the edge case when cut is less than 0th position
			int l2 = (mid2 - 1 < 0) ? INT_MIN : nums2[mid2 - 1];

			int r1 = (mid1 == n1) ? INT_MAX : nums1[mid1];   //Handling the edge case when cut reached the end position
			int r2 = (mid2 == n2) ? INT_MAX : nums2[mid2];   //which means no cut

			if (l1 <= r2 && l2 <= r1)                      //Ideal condition which means we have the best partition now
			{	// with equal no of elements on both side

				if ((n1 + n2) % 2 == 0) return (max(l1, l2) + min(r1, r2)) / 2.0; //Formula for median when total elem is even
				else return max(l1, l2);                                         //Formula for median when total elem is odd
			}
			if (l1 > r2)                                    //Basic Binary search adjustments
			{
				high = mid1 - 1;
			}
			if (l2 > r1)
			{
				low = mid1 + 1;
			}
		}
		return 0.0;
	}
};