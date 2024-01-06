class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxFreq= 0, window = 0; 
        unordered_map<char, int> m; 
        int front = 0, back = 0; 
        while(back<s.length()){
            m[s[back]]++;
            window++;
            if(m[s[back]]>maxFreq)maxFreq = m[s[back]];
            if(window-maxFreq<=k)
                back++;
            else{
                m[s[front]]--;
                window--;
                back++;  
                front++; 
            }

        }
        return window; 
    }
};
