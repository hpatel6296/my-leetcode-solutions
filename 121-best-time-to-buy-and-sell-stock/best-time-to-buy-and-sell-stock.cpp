class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0,maxProf = 0;
        int right = 1;

        while(right<prices.size()){
              if(prices[left] < prices[right]){
                   int profit = prices[right] - prices[left];
                   maxProf = max(profit,maxProf);
              }
              else{
                left = right;
              }
              right++;
        }
        return maxProf;
    }
};

/*
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
*/