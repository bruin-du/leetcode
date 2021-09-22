int maxDepth(struct TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxDepth(root->left) + 1;
    int right = maxDepth(root->right) + 1;
    return left > right ? left : right;
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
    {
        return true;
    }
    int maxleft = maxDepth(root->left);
    int maxright = maxDepth(root->right);
    return abs(maxleft - maxright) < 2 && isBalanced(root->left) && isBalanced(root->right);
}