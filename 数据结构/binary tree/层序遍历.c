//层序遍历
void postorder(treeNode* Node)
{
    Tnode* Queue[1000]; //创建队列
    int front = -1,rear = -1;

    Tnode* p;
	
    Queue[++rear] = root;
    while(front < rear)
    {
        p = Queue[++front]; 
        printf("%d ",p->val);
        if(p->left) 
            Queue[++rear] = p->left;
        if(p->right)
            Queue[++rear] = p->right;
            
    }
}
