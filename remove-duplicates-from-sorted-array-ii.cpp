https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/1207132339/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
    
        for(auto x:nums)
        {
            if(i==0||i==1|| nums[i-2]!=x)
            {
                nums[i] = x;
                i++;
            }
        }
        return i;
    }
};
