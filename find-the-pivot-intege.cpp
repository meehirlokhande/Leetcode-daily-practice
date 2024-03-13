https://leetcode.com/problems/find-the-pivot-integer/submissions/1202882071/?envType=daily-question&envId=2024-03-13

class Solution {
    public int pivotInteger(int n) {
        
        for(int k=1;k<=n;k++)
        {
            int leftSum=0;
            int rightSum=0;
            for(int j=1;j<=k;j++)
            {
                leftSum += j;
            }
            for(int l=n;l>=k;l--)
            {
                rightSum += l;
            }
            if(leftSum==rightSum)
            {
                return k;
            }
        }
        return -1;
        
    }
}
