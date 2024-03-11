https://leetcode.com/problems/custom-sort-string/submissions/1200740523/?envType=daily-question&envId=2024-03-11

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>umap;
        for(int i=0;i<order.size();i++)
        {
            umap[order[i]]=i;
        }

        sort(s.begin(),s.end(),[&](char a,char b){
            return umap[a]< umap[b];
        });

        return s;

    }
};
