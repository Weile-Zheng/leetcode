class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size() -1; 
        int j = n;
        for(int i: arr) if(i==0) j++; 
        for(int i = n; i>=0; i--){
            if(j<=n)
                arr[j]=arr[i];
            j--;
            if(arr[i]==0){
                if(j<=n)arr[j]=0; 
                j--; 
            }
        }
    }
};
