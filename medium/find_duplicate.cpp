class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Treat the array as a linked list. Then apply Floyd's algorithm. 
        int fast = nums[nums[0]];
        int slow = nums[0];
        while(fast!=slow){
            fast = nums[nums[fast]];
            slow = nums[slow]; 
        }

        slow = 0;
        while(fast!=slow){
            fast= nums[fast];
            slow = nums[slow];
        }

        return slow; 
    }
};
