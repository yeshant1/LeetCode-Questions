//leetcode - 104

class Solution {
public:
    int maxDepth(TreeNode* root) {

        //base case
        if(root == NULL){
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        int ans = max(left,right) + 1;

        return ans;
        
    }
};
