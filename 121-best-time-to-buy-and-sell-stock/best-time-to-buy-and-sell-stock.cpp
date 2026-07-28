class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int hold = -prices[0];

        for(int i=0;i<prices.size();i++){
            hold = max(hold,-prices[i]);

            maxPro = max(maxPro , hold + prices[i]);
        }
        return maxPro;
    }
};