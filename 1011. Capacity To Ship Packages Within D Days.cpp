https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
class Solution {
public:
    int solve(vector<int>& weights,int mid){
        int sum =0;
        int daysCount=1;
        for(int i=0;i<weights.size();i++)
        {
            
            if(sum + weights[i] > mid){
                daysCount++;
                sum=0;
            }
            sum += weights[i];
        }
        return daysCount;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int leastWC = 1;
        int low =  *max_element(begin(weights),end(weights));
        // int low = *min_element(begin(weights),end(weights));
        int high = accumulate(begin(weights),end(weights),0);

        while(low <= high){
            int mid = low + (high-low)/2;

            if(solve(weights,mid) <= days){
                high = mid-1;
            }else{
                low = mid+1;
            }

        }

        return low;
        
    }
};
