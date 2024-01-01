class Solution {
public:
    char findTheDifference(string s, string t) {        
        unordered_map<char, int> m; 
        for(char c: s) m[c]++;
        for(char c: t){
            if(m.find(c)==m.end()|| m[c]==0)return c; 
            m[c]--;
        }
        return 'a'; //place holder line for compiling, we know there must present a char solution in the for loop. 
    }
};
