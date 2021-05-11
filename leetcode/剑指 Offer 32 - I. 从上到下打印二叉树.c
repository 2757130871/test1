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

    Tnode* Queue[1000]; //��������
    int front = -1, rear = -1; //��ͷ����β

    Tnode* p; //����ָ��

    int* retArr = (int*)malloc(sizeof(int) * 1000);//��������
    int i = 0;//

    Queue[++rear] = root;
    while (front < rear)
    {
        p = Queue[++front]; //����
        retArr[i++] = p->val;
        if (p->left)
            Queue[++rear] = p->left;
        if (p->right)
            Queue[++rear] = p->right;

    }

    *returnSize = i;
    return retArr;
}