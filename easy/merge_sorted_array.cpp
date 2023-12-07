class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return; 

        int index = n-1; 
        int current = nums1.size()-1;
        while(index >=0){
            if(m==0){
                nums1[current] = nums2[index];
                index--; 
                current--;
            }
            else if(nums2[index]>=nums1[m-1]){
                nums1[current] = nums2[index];
                index--; 
                current--;
            }
            else{
                nums1[current]= nums1[m-1];
                m--;
                current--;
            }


        }
        }
        
    };

    // Submission: https://leetcode.com/problems/merge-sorted-array/
