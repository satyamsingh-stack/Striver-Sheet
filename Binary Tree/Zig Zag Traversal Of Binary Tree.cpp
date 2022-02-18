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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)  return result;
        queue<TreeNode*> q;
        q.push(root);
        bool lefttoright=false;
        while(q.empty()==false){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left!=NULL)    q.push(temp->left);
                if(temp->right!=NULL)   q.push(temp->right);
            }
            if(lefttoright){
                reverse(level.begin(),level.end());
                lefttoright=0;
            }
            else{
                lefttoright=1;
            }
            result.push_back(level);
        }
        return result;
    }
};
