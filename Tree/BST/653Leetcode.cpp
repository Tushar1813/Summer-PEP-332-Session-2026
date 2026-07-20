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
    vector<int> Inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return ans;
        }
        Inorder(root->left,ans);
        ans.push_back(root->val);
        Inorder(root->right,ans);
        return ans;

    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        Inorder(root,ans);
        int n=ans.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int sum=ans[l]+ans[r];
            if(sum==k){
                return true;
            }
            else if(sum<k){
                l++;
            }
            else{
                r--;
            }
        }
        return false;
    }
};