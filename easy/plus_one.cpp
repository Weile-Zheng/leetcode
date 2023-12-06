class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int position = digits.size()-1; 
        digits[position]++;
        while(digits[position] ==10 && position >0){
            digits[position-1]++;
             digits[position]=0;
            position --;
        }
        if(digits[0] == 10){
            digits[0] = 0; 
            digits.insert(digits.begin(), 1);
        }
        return digits; 
    }
};

// Submission https://leetcode.com/submissions/detail/1054870624/