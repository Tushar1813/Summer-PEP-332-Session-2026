class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrize=prices[0];
        int maxProfit=0;

        for(int i=1;i<prices.size();i++){
            if(prices[i]<minPrize){
                minPrize=prices[i];
            }
            else{
                int profit=prices[i]-minPrize;
                if(profit>maxProfit){
                    maxProfit=profit;
                }
            }
        }
        return maxProfit; 
    }
};