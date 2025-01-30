https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    void solve(vector<int>& nums, set<vector<int>>& ans,vector<int>subset,int idx){
        if(idx==nums.size()){
            ans.insert(subset);
            return;
        }
        //not take
        solve(nums,ans,subset,idx+1);
        //take 
        subset.push_back(nums[idx]);
        solve(nums,ans,subset,idx+1);
        subset.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums),end(nums));
        set<vector<int>>ss;
        vector<vector<int>> ans;
        vector<int>subset;
        solve(nums,ss,subset,0);
        for(auto x: ss){
            ans.push_back(x);
        }
        return ans;
    }
};
