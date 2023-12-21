class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0; 
        set<int> s;
        for(int i : nums) s.insert(i);
        int max = 1;
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int curr = 1;
                while(s.find(i+1)!=s.end()){
                    curr++;
                    i++;
                }
                if(curr> max)max = curr; 
            }
        }
        return max; 
    }
};
