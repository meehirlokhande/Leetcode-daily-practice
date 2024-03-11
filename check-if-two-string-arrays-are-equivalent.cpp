https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/1200763650/?envType=daily-question&envId=2024-03-11

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="";
        string b="";
        for(int i=0;i<word1.size();i++)
        {
            a=a+word1[i];
        }
        for(int j=0;j<word2.size();j++)
        {
            b=b+word2[j];
        }
        if(a==b)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
