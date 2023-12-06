class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j =0; 
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j; 
    }
};

// Submission: https://leetcode.com/submissions/detail/1054058826/
