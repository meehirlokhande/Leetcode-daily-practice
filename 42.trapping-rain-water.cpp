https://leetcode.com/problems/trapping-rain-water/description/
// Method 1: prefix method 
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>leftMax(n);
        vector<int>rightMax(n);
         leftMax[0] = height[0];
       for(int i=1;i<n;i++)
       {
           leftMax[i] = max(height[i],leftMax[i-1]); 
       } 
         rightMax[n-1] = height[n-1];
       for(int j=n-2;j >= 0 ;j--)
       {
        rightMax[j] = max(height[j],rightMax[j+1]); 
       }

       int total =0;
       for(int i=0;i<n;i++)
       {
            if(height[i] < leftMax[i] && height[i] < rightMax[i]){
                total += min(leftMax[i],rightMax[i])- height[i];
            }
       }

       return total;
       
    }
};
