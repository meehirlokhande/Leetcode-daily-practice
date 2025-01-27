https://leetcode.com/problems/count-servers-that-communicate/solutions/1114519/easiest-dfs-solution/

Method 1 : Tc: O(m*n)  Sc:O(m+n)

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> Rows(grid.size());
        vector<int> Cols(grid[0].size());

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                Rows[i] += grid[i][j];
                Cols[j] += grid[i][j];
            }
        }

        int ans =0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1 && (Rows[i] > 1 || Cols[j] > 1)){
                    ans++;
                }
            }
        }

        return ans;
    }
};


