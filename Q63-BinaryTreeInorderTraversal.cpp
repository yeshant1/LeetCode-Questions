//leetcode - 94
class Solution {
public:
    
    void inorder(TreeNode* root,vector<int> &arr){
        if(root == NULL){
            return ;
        }

        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> arr;

        inorder(root,arr);

        return arr;
        
    }
};
