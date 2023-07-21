//  Is Subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x = 0;
        for(int i=0; i<t.length() && x<s.length(); i++){
            if(s[x] == t[i]){
                x++;
            }
        }
        
        return (x == s.length());
        
    }
};