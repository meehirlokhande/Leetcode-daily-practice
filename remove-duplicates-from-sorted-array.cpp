https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1206680434/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto it = unique(nums.begin(),nums.end());
        nums.erase(it,nums.end());
        return nums.size();
        
}
};
