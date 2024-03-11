class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        sort(nums2.begin(),nums2.end());
        for(int i = 0; i<nums1.size(); i++){
            int x = binary_search(nums2.begin(),nums2.end(),nums1[i]);
            if(x){
                ans.insert(nums1[i]);
            }
        }
        vector<int>finalAns;
        for(auto v : ans){
            finalAns.push_back(v);
        }
        return finalAns;
    }
};