class Solution
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