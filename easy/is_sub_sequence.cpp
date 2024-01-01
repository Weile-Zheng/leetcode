class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length())return false; 
        int index = 0; 
        for(int i=0; i<t.length(); i++) {
            if(t.length()-i<s.length()-index) return false; 
            if(t[i]==s[index]) index++;
        }
        return index == s.length(); 
    }
};
