
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen=0;
        int length=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
               length++;
               maxlen = max(maxlen,length); 
            }else{
                length=0;
            }
        }
        return maxlen;
    }
};
