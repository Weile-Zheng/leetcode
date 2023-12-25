class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s; 
        unordered_set<int>seen; 
        vector<int> v; 
        for(int i:nums1)s.insert(i);
        for(int i:nums2){
            if(s.find(i)!= s.end()&&seen.find(i)==seen.end()){
                seen.insert(i);
                v.push_back(i);
            }
        }
        return v; 
    }
};
