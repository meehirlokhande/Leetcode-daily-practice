https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

class Solution {
public:
    int numberOfBouquet(vector<int>&arr,int mid,int k){
        int count=0; 
        int numberOfBouquet = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= mid){
                count++;
            }else{
                count=0;
            }

            if(count==k){
                numberOfBouquet++;
                count=0;
            }
        }
        return numberOfBouquet;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int minimumDays = -1;
        int low =0;
        int high = *max_element(begin(arr),end(arr));
        while(low <= high){
            int mid = low + (high-low)/2;

            if(numberOfBouquet(arr,mid,k) >= m){
                minimumDays = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return minimumDays;
    }
};
