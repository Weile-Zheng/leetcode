class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(int i=0; i<s.length(); i++) m[s[i]]++; 
        int longest=0; 
        bool odd = false;
        for(const auto& [character, freq]: m){
            if(freq%2==0) longest += freq;
            else {
                longest+=(freq-1);
                odd = true; 
            }
        }
        if(odd)longest++;
        return longest; 
    }
};
