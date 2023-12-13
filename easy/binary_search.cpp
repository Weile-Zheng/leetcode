class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)return -1; 
        return helper(nums, target, 0, nums.size()-1);
    }

    int helper(vector<int> &nums, int target, int begin, int end){
        if(end<begin)return -1; 
        int mid = (begin+end)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]>target) return helper(nums, target, begin, mid-1);
        return helper(nums, target, mid+1, end); 
    }

};
