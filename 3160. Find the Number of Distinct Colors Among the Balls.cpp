https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/?envType=daily-question&envId=2025-02-07

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>umap;
        unordered_map<int,int>freq;
        vector<int>result;
        for(auto query: queries)
        {     
            int ball = query[0], color = query[1];
            if(umap.find(ball)!=umap.end()){
                int oldColor = umap[ball];
                freq[oldColor]--;
                if(freq[oldColor]==0){
                    freq.erase(oldColor);
                }
            }
            umap[ball] = color;
            freq[color]++;

            result.push_back(freq.size());

        }

        return result;

    }
};
