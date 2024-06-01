https://leetcode.com/problems/score-of-a-string/

class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
       
        for(int i=0;i<s.length();i++)
        {
            if(i==s.length()-1){
                break;
            }
            int first = s[i];
            int second =s[i+1];

           
            int temp = abs(first-second);
            sum = sum + temp;

        }
        return  sum;
    }
};
