class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n=prices.size();
        int left=0;
        for(int right=0;right<n;right++){
            if(prices[right]>prices[left]){
                maxProfit=max(maxProfit,prices[right]-prices[left]);
            }else{
                left=right;
            }
        }
        return maxProfit;
    }
};
