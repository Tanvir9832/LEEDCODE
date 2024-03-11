class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++){
            int x = target - nums[i] -1;
            int rest = upper_bound(nums.begin(), nums.end(), x) - nums.begin();
            if(rest > i){
                ans = ans + rest - (i + 1);
            }
        }
        return ans;
    }
};