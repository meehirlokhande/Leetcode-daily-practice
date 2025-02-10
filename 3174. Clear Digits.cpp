https://leetcode.com/problems/clear-digits/description/?envType=daily-question&envId=2025-02-10

class Solution {
public:
    string clearDigits(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i])){
                if(temp.length()>0){
                    temp.pop_back();
                }
            }else{
                    temp.push_back(s[i]);
                }

        }
        return temp;
    }
};
