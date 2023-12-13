class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)return false; 
        if(matrix[0].size()==0)return false; 
        int size = matrix[0].size();
        return helper(matrix, target, 0, matrix.size()*size-1, size); 
    }

    bool helper(vector<vector<int>>& matrix, int target, int begin, int end, int size){
        if(end<begin)return false; 
        int mid = (begin+end)/2; 
        int row = mid/size; 
        int column = mid%size;
        if(matrix[row][column]==target)return true; 
        if(matrix[row][column]<target)return helper(matrix, target, mid+1,end,size);
        return helper(matrix, target, begin, mid-1,size );
    }
};
