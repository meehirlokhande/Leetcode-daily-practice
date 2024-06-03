https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int i=0;
        
        // while(i<nums.size())
        // {
        //     int j=i+1;
        //     while(j<nums.size())
        //     {
        //         int sum = nums[i]+nums[j];
        //         if(sum==target)
        //         {
        //             return {i,j};
        //         }
        //         j++;
        //     }
        //     i++;
        // }
        // return {};

        unordered_map<int, vector<int>>umap;

        vector<int> res;

        for(int i=0; i<nums.size(); i++)
        {
            umap[nums[i]].push_back(i);
        }

        for(auto x:nums)
        {
           int y = target-x;
           
           if(umap.find(y) != umap.end())
           {
                if (x == y) {

                    if (umap[x].size() >= 2) {
                        res.push_back(umap[x][0]);
                        res.push_back(umap[x][1]);
                        break;
                    }
                } else {
                    res.push_back(umap[x][0]);
                    res.push_back(umap[y][0]);
                    break;
                }
                
           }
        }

        return res;
    }
};
