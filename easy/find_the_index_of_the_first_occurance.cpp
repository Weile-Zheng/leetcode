class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())return -1; 

        int index =0; 
        while(haystack.length()- index >=needle.length()){
        bool found = true; 
        for(int i =index; i<needle.length()+index;i++){
            if(haystack[i]!=needle[i-index]) {
                index++;
                found =false; 
                break; 
                }
            }
            if(found) return index; 
        }
        return -1; 
    }
};

// Solution: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/submissions/1114032882/
