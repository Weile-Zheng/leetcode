class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream iss(s);
        map<char, string> m; 
        set<string> myset; 
        string word;
        for(int i=0;i <pattern.length();i++){
            iss>> word; 
            if(myset.find(word)==myset.end()) myset.insert(word);
            else{
                if(m.find(pattern[i])== m.end()) return false; 
            }
            if(m.find(pattern[i])== m.end()) m[pattern[i]]=word; 
            if(m[pattern[i]]!= word)return false;
        }
        if(iss>>word)return false; 
        return true; 
    }
};
