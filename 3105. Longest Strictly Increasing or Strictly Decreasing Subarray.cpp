https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/?envType=daily-question&envId=2025-02-03

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        // int maxA = 1;
        // int maxD = 1;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     int temp =1;
        //     while(nums[i]<nums[i+1] && i < nums.size()-1){
        //         i++;
        //         temp++;

        //     }
        //     maxA = max(maxA,temp);
        // }

        // for(int j=0;j<nums.size()-1;j++){
        //     int ramp=1;
        //     while(nums[j]> nums[j+1] && j<nums.size()-1){
        //         j++;
        //         ramp++;
        //     }
        //     maxD = max(maxD,ramp);
        // }

        // if(maxA > maxD){
        //     return maxA;
        // }
        // return max(maxA,maxD);

        int maxA=1;
        int maxD = 1;
        int increment = 1;
        int decrement = 1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+ 1]){
                increment++;
                decrement=1;
            }else if(nums[i]> nums[i+1]){
                decrement++;
                increment=1;
            }else{
                increment=1;
                decrement=1;
            }
            maxA = max(maxA,increment);
            maxD = max(maxD,decrement);
        }
        return max(maxA,maxD);
    }
    

};
