class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1, target );
    }
    // 1 3 5 7
    int binarySearch(vector<int> &nums, int begin, int end, int target){
        if(end<begin) return begin;
        if(begin>end)return end; 
        int mid = (begin + end)/2;
        if(nums[mid]==target)return mid; 
        if(nums[mid]>target) return binarySearch(nums, begin, mid-1, target);
        return binarySearch(nums, mid+1, end, target); 
    }
};
