/*
		3 - Best Time to Buy and Sell Stock
		> Solved by : Ahmed Elghrabawy
		> problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
		> 2 Solutions 
    */
// #1 brute force (keep track for the maximum number)
#include<vector>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for(int i=0; i<prices.size(); i++){
               for(int j=i+1; j<prices.size(); j++){
                   if(prices[j]>prices[i]){
                       int diff = prices[j]-prices[i];
                       if(diff>max)
                           max = diff;
                   }
               }
        }
        return max;
    }
};
/*
/*
    Time Complexity : O(N), As we iterate the array(prices) two times. Where N = size of the array.

    Space complexity : O(N), Array(maxPrices) space.

    Solved using Dynamic Programming Approach(tabulation).
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxPrices(n, 0);
        maxPrices[n-1] = prices[n-1];
        for(int i=n-2; i>=0; i--){
            maxPrices[i] = max(maxPrices[i+1], prices[i]); 
        }
        int maxProfit = 0;
        for(int i=0; i<n; i++){
            maxProfit = max(maxProfit, maxPrices[i] - prices[i]); 
        }
        return maxProfit;
    }
};

