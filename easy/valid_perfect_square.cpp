class Solution {
public:
    bool isPerfectSquare(int num) {
        double n = 1; 
        while(n*n<=num){
            if(n*n == num) return true;
            n ++; 
        }
        return false; 
    }
};
