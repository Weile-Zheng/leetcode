class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;

        answer.push_back(1); 
        for(int i=1; i<nums.size(); i++) {
            answer.push_back(answer[i-1]*nums[i-1]);
        }

        int postfix_product = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            answer[i]*= postfix_product;
            postfix_product*=nums[i];
        }
        
        return answer; 
    }

};
