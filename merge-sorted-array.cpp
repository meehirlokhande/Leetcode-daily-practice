https://leetcode.com/problems/merge-sorted-array/submissions/1202910978/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count=0;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]==0 && n!=0)
            {
                nums1[i]=nums2[count];
                count++;
                n--;
            }
        }
        sort(nums1.begin(),nums1.end());
        return;
    }
};
