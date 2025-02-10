https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/
class Solution {
public:
    int sum(vector<int>nums,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int smallest=-1;
        int low = 1;
        int high = *max_element(begin(nums),end(nums));
        while(low <= high){
            int  mid = low + (high-low)/2;
            if(sum(nums,mid) <= threshold){
                smallest = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return smallest;
    }
};
