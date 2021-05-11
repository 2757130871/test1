/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 /**
  * Note: The returned array must be malloced, assume caller calls free().

 */
typedef struct TreeNode Tnode;


//
int* levelOrder(struct TreeNode* root, int* returnSize) {

    if (!root)
    {
        *returnSize = 0;
        return NULL;
    }

    Tnode* Queue[1000]; //创建队列
    int front = -1, rear = -1; //队头，队尾

    Tnode* p; //工作指针

    int* retArr = (int*)malloc(sizeof(int) * 1000);//返回数组
    int i = 0;//

    Queue[++rear] = root;
    while (front < rear)
    {
        p = Queue[++front]; //出队
        retArr[i++] = p->val;
        if (p->left)
            Queue[++rear] = p->left;
        if (p->right)
            Queue[++rear] = p->right;

    }

    *returnSize = i;
    return retArr;
}