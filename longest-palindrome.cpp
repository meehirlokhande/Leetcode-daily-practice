https://leetcode.com/problems/longest-palindrome/


class Solution {
public:
    int longestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(rev==s)
        {
            return s.length();
        }
        int len = s.length();
        int count=0;
        unordered_map<char,int>umap;
        for(auto i : s)
        {
            umap[i]++;
        }
        for(auto x:umap)
        {
            if(x.second%2==0 )
            {
                count=count+x.second;
            }else if(x.second%2!=0 && x.second>1)
            {
                count=count+x.second-1;
            }
        }
        if(count==len)
        {
            return count;
        }else{
            return count+1;
        }
    }
};
