class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int small = prices[0];
        int n = prices.size();
        for(int i=1;i<n;i++){
             int cost = prices[i] - small;
             maxP = max(maxP,cost);
             small = min(small,prices[i]);
        }
        return maxP;
    }
};