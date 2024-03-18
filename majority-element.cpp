https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(auto x:nums)
        {
            freq[x]++;
        }
        for(auto t :freq)
        {
            if(t.second>n/2)
            {
                return t.first;
            }
        }
    return -1;
    }
};
