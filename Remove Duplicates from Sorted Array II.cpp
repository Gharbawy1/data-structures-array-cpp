/*
		2 - Remove Duplicates from Sorted Array II
		> Solved by : Ahmed Elghrabawy
		> problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
		> 2 Solutions 
    */

// #1 
#include<vector>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //time O(N^2), space O(1)
        // using 2 pointers techniqe
        int flag = 0;
        int cnt = 0;
        int p1 = 0, p2 = 1;
        while (p2 != nums.size())
            if (nums[p1] == nums[p2] && flag == 0) {
                flag = 1;
                p2++;
            }
            else if (nums[p1] != nums[p2]) {
                p1 = p2;
                p2++;
                flag = 0;
            }
            else {
                nums.erase(nums.begin() + p2); // it make the time O(N^2)
                // we can make a cnt to keep track for numbers i must remove and ret nums.size()-cnt
            }
        return nums.size();
    }
};
// #2  another solution o(N)
class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        // int ele= nums[0];
        for (auto ele : nums)
        {
            if (i == 0 || i == 1 || nums[i - 2] != ele)
            {
                nums[i] = ele;
                i++;
            }
        }
        return i;
    }
};
