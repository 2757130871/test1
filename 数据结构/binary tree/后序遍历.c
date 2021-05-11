
//后序遍历
void postorder(treeNode* Node)
{
	if (!Node)
		return;
	postorder(Node->left);
	postorder(Node->right);
	printf("%c", Node->data);
}
