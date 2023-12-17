class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.size()==2) return{1,2}; 
        
        int smallest =0;
        int greatest = numbers.size()-1;
        while(true){
            if(numbers[smallest]+numbers[greatest]==target)return {smallest+1, greatest+1}; 
            if(numbers[smallest]+ numbers[greatest]> target) greatest--; 
            else smallest++; 

        }
        return {}; 

    }
};

// Solution: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/solutions/4417844/most-concise-c/
