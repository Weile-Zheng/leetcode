class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans; 
        unordered_map<string, vector<string>> map; 
        for(const string s: strs){
            string sorted = s; 
            sort(sorted.begin(), sorted.end()); 
            map[sorted].push_back(s);
        }
        for(const auto [key, value]: map)ans.push_back(value); 
        return ans; 
    }
};
