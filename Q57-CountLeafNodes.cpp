//coding ninjas
void preorder(BinaryTreeNode<int> *root,int& count)
{
    //base case
    if(root == NULL){
        return ;
    }
 
    if(root->left == NULL && root -> right == NULL){
        count++;
    }
 
    preorder(root->left,  count);
    preorder(root->right,  count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
 
    int cnt = 0;
    preorder(root,cnt);
 
    return cnt;
}
