class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>m;  // character and index 
        int curr = 0;
        int max = 0; 
        for(int i=0; i<s.length(); i++){
            if(m.find(s[i])==m.end()|| m[s[i]]<i-curr){
                curr++;
                if(curr>max) max = curr; 
            }
            else curr = i - m[s[i]];

            m[s[i]]=i;
        }
        return max; 
    }
};
