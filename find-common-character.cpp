https://leetcode.com/problems/find-common-characters/


class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
      

        for(char c: words[0])
        {
            bool common = true;

            for(int i=1;i<words.size();i++)
            {
                if(words[i].find(c)==string::npos)
                {
                    common=false;
                    break;
                }else{
                    words[i].erase(words[i].find(c),1);
                }
            }
            if(common)
            {
                result.push_back(string(1,c));
            }
        }
        return result;
    }
};
