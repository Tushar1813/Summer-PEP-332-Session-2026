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
    TreeNode* minElement(TreeNode* node){
        while(node->left!=NULL){
            node=node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key > root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }

            //case3: to delete node which has two children
            //find the smmallest element in right subtree in its left side

            TreeNode* temp=minElement(root->right);

            //copy this min elelement val in the node which weare supposed to delete
            root->val=temp->val;
            //Delete the successor from bst(as we have already copied the values)
            root->right=deleteNode(root->right,temp->val); 
        }
        return root;
    }
};