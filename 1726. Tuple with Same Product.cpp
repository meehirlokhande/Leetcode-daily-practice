https://leetcode.com/problems/tuple-with-same-product/
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> umap;
    
        for(int i=0;i<nums.size();i++)
        {
            int mul;
            for(int j=i+1;j<nums.size();j++)
            {
                int mul = nums[i]*nums[j];
                umap[mul]++;
            }
            
        }
        int total = 0;
        for(auto x:umap){
            int count = x.second;
            if(count >= 2){
                total += count * (count-1) / 2;
            }
        }

        return total*8;

    }
};
