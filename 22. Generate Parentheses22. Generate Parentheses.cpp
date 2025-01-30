https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    void solve(int open,int close,vector<string>& ans,string str){
        if(open==0 && close==0){
           ans.push_back(str);
           return; 
        }

        if(open > 0){
            solve(open-1,close,ans,str+"(");
        }
        if(close >  open){
            solve(open,close-1,ans,str+")");
        }

        return ;
    }
    vector<string> generateParenthesis(int n) {   
        vector<string>ans;
        int open = n;
        int close= n;
        solve(open,close,ans,"");
        return ans;
    }
}; 
