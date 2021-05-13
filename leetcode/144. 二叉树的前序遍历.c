
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */

void preOrder(struct TreeNode* root, int* arr, int* i)
{
    if (!root)
        return;
    arr[(*i)++] = root->val;
    if (root->left)
        preOrder(root->left, arr, i);
    if (root->right)
        preOrder(root->right, arr, i);
}

//µ›πÈ µœ÷ 
int* preorderTraversal(struct TreeNode* root, int* returnSize) {

    int* retArr = (struct TreeNode*)malloc(sizeof(struct TreeNode) * 100);
    if (!retArr)
        return NULL;

    *returnSize = 0;
    preOrder(root, retArr, returnSize);

    return retArr;
}