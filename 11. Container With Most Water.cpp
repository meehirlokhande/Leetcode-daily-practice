
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxArea = 0;
        while(left < right){
            int length = min(height[left],height[right]);;
            int breadth = abs(left-right);
            int area = length*breadth;
            maxArea = max(area,maxArea);
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;  
    }
};
