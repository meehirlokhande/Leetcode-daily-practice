/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

    int minOperation(vector<int>vec){
        vector<int> sortedVec(begin(vec),end(vec));
        sort(sortedVec.begin(),sortedVec.end());
        int swaps = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<vec.size();i++){
            mp[vec[i]] = i;
        }

        for(int i=0;i<vec.size();i++){
            if(sortedVec[i]==vec[i]){
                continue;
            }

            int currentIdx = mp[sortedVec[i]];
            mp[vec[i]] = currentIdx;

            swap(vec[currentIdx],vec[i]);
            swaps++;
        }

        return swaps;
    }

public:
    int minimumOperations(TreeNode* root) {
       if(root==NULL){
        return 0;
       }
        int result =0;
       queue<TreeNode*> que;
       que.push(root);
       while(!que.empty()){
            int n = que.size();
            vector<int>vec;
            
            while(n--){
                TreeNode* temp = que.front();
                que.pop();
                vec.push_back(temp->val);

                if(temp->left){
                    que.push(temp->left);
                }

                if(temp->right){
                    que.push(temp->right);
                }
            }

            result += minOperation(vec);
       }

       return result;
    }
};
