class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int current = nums[0];
        int index = 1; 
        for(int i=1; i<nums.size();i++){
            if(nums[i]!= current){
                nums[index]=nums[i];
                index ++;
                current = nums[i];
            }
        }
        return index; 
    }
};

// Submission: https://leetcode.com/problems/remove-duplicates-from-sorted-array/class Solution
{
public:
    // 1, 2,2, 3,4
    int removeDuplicates(vector<int> &nums)
    {
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

// Submission: https://leetcode.com/submissions/detail/1054057305/
