
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto x:nums){
            umap[x]++;
        }
        for(auto y:umap){
            if(y.second==1){
                return y.first;
            }
        }
        return 0;
    }
};
