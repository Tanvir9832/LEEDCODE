class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int mx = 0;
        for (int i : nums)
        {
            mp[i]++;
            mx = max(mx, mp[i]);
        }
        int ans = 0;

        for (auto u : mp)
        {
            if (u.second == mx)
                ans += mx;
        }
        return ans;
    }
};