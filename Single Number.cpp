	/*
		1 - single number problem
		> Solved by : Ahmed Elghrabawy
		> problem link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/
		 time O(n) , space O(1) 
	*/
	class soultion {
	public:
		int singleNumber(vector<int>& nums) {
			int ans = 0;
			for (int i = 0; i < nums.size(); i++)
			{
				ans ^= nums[i];
			}
			return ans;
			}
		}
	/*
		assume the nums [4,1,2,1,2]
		remember the XOP Logic a^a = 0 , 0^a = a . 
		proprties : (A^A)^B = (A^B)^A 
		the ans^=nums[i] mean 4^1^2^1^2 = 4^1^1^2^2 = 4^0^0=4
		and 4 is the unique number !
	*/
	};
