https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/?envType=daily-question&envId=2024-06-03

class Solution {
public:
    int appendCharacters(string s, string t) {
        
       int slen = s.length();
       int tlen = t.length();

        int k=0;
        int j=0;
        while(k < slen) {
            if (j==tlen) {
                break;
            }
            else if (s[k] == t[j]) {
                j++;
            }    
            k++;
        }
       return (tlen-j);
    }
    
};
