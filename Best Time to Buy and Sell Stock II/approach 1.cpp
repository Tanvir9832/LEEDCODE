class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int ans = 0;
        while(r<prices.size()){
            if(prices[l]<prices[r]){
                ans = ans + (prices[r]-prices[l]); 
            }
                l++;
                r++;
        }
        return ans;
    }
};