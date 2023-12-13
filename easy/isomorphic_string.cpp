class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!= t.length()) return false; 
        unordered_map<char, char> m;
        set<char> matched; 
        for(int i=0; i<s.length();i++){
            if(m.find(s[i])== m.end() && matched.find(t[i])==matched.end() ) {
                m[s[i]]=t[i];
                matched.insert(t[i]);
            }
            else if(m.find(s[i])== m.end() && matched.find(t[i])!=matched.end())
                return false; 
            if(m[s[i]]!=t[i])return false; 
        }
        return true; 
    }
};

