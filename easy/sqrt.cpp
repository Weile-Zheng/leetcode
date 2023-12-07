class Solution {
public:
    int mySqrt(int x) {
        double root=0;
        while(root*root<=x) root++ ;
        return root-1;  
    }
};

// Submission: https://leetcode.com/submissions/detail/1054878792/