class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==0|| nums.size()==1) return nums;
        vector<int> v; 
        unordered_map<int, int> m;
        for(int i: nums)
            m[i]++;
      
        // Buckets
        vector<int> freqList [nums.size()+1]; 
        for(auto&[number, freq]:m)
            freqList[freq].push_back(number);

        int count =0;
        for(int i=nums.size(); i>=0;i--){
            if(freqList[i].size()!=0){
                for(int num: freqList[i]){
                    v.push_back(num);
                    count ++;
                }
            }
            if(count==k)break; 
        }

        return v; 
        
    }
};
