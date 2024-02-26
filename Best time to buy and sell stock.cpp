class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int s=prices.size();
        int minPrice=INT_MAX;
        for(int i=0;i<s;i++){
            minPrice=min(minPrice,prices[i]);
            maxPro=max(maxPro,prices[i]-minPrice);
        }
        return maxPro;
        
    }
};
