class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        if(strs.size()==1)return strs[0];
        string prefix = "";
        int index = 0;
        while(true){
            char c = strs[0][index];
            for(int i=1; i<strs.size();i++){
                if(strs[i].length()==index) return prefix; 
                if(strs[i][index]!= c )return prefix; 
            }
            prefix +=c; 
            index++; 
        }
        return prefix; 
    }
};
