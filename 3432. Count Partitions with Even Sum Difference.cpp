https://leetcode.com/problems/count-partitions-with-even-sum-difference/

 int count=0;
        int sum=0;
        for(auto x:nums){
            sum += x;
        }
        int leftSum=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            leftSum += nums[i];
            int rightSum = sum - leftSum;
            if((leftSum-rightSum)%2==0){
                count++;
            }
        }
        return count;
