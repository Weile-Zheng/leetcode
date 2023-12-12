class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool carry = false;
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i]==9) {
                digits[i]=0;
                carry = true; 
           }
           else{
                digits[i]++;
                carry=false; 
                break;
           }
        }
        if(carry) digits.insert(digits.begin(), 1);
        return digits; 
    }
};class Solution {
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
