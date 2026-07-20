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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }

        q.push(root);
        while(!q.empty()){
            int levelSize=q.size();
            vector<int> levelElement;

            for(int i=0;i<levelSize;i++){
                TreeNode* frontNode=q.front();
                q.pop();

                levelElement.push_back(frontNode->val);

                if(frontNode->left)q.push(frontNode->left);
                if(frontNode->right)q.push(frontNode->right);
            } 
            ans.push_back(levelElement);
        }
        return ans;
    }
};