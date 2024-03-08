class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0)
            return 0;
        int l = 0, r = 1, ans = 0;
        while (r <= prices.size() - 1)
        {
            if (prices[l] > prices[r])
            {
                if (r - l == 1)
                {
                    r++;
                    l++;
                }
                else
                {
                    l++;
                }
            }
            else
            {
                ans = max(ans, prices[r] - prices[l]);
                r++;
            }
        }

        return ans;
    }
};