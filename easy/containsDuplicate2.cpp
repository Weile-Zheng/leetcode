class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0)return false; 
        unordered_map<int, int> m; // Number, index
        for(int i =0; i<nums.size(); i++){
            if(m.find(nums[i])!=m.end()&&i-m[nums[i]]<=k) return true; 
            m[nums[i]]=i;
        }

        return false; 
    }
};
