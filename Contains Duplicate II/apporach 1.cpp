class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
 map<int,int>mp;
for(int i=1;i<=nums.size(); i++){
    if(mp[nums[i-1]]!=0){
     if(abs(mp[nums[i-1]] - i)<=k)
       return true;
        
       mp[nums[i-1]]=i;
    }else{
       mp[nums[i-1]]=i; 
    }
    
}
       return false;
 }
};
