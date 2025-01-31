https://leetcode.com/problems/combination-sum-iii/

class Solution {
public:
    int combinationSum(vector<int>& combination){
        int ans=0;
        for(auto &x:combination){
            ans += x;
        }
        return ans;
    }
    void solve(int k,int n,vector<vector<int>>&ans,vector<int>&combination,int idx){
            if(k==0){
                if(combinationSum(combination)==n){
                    ans.push_back(combination);
                }
                return;
            }

        if(idx > 9) return;
       
       //take 
        combination.push_back(idx);
        solve(k-1,n,ans,combination,idx+1);
        combination.pop_back();
        // do not take
        solve(k,n,ans,combination,idx+1);
        
                
    }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>combination;
        solve(k,n,ans,combination,1);
        return ans;

    }
};
