https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    int solve(vector<int>& piles, int mid){
        int count=0;
        for(int i: piles){
            count += i/mid + (i%mid !=0);
        }

        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high= *max_element(begin(piles),end(piles));

        while(low<high){
            int mid = low + (high-low)/2;
            int requiredHours = solve(piles,mid);

            if(requiredHours <= h){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};
