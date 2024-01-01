class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)return {};
        vector<string> ans; 
        int x = nums[0];
        for(int i =1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]+1){
                if(x == nums[i-1]) ans.push_back(to_string(x));
                else ans.push_back(to_string(x)+"->"+to_string(nums[i-1]));
                x = nums[i];
            }
        }
        if(x == nums[nums.size()-1]) ans.push_back(to_string(x));
        else ans.push_back(to_string(x)+"->"+to_string(nums[nums.size()-1]));
        return ans; 
    }
};
