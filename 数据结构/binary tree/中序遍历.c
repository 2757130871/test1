
//ÖÐÐò±éÀú
void inorder(treeNode* Node)
{
	if (!Node)
		return;
	inorder(Node->left);
	printf("%c", Node->data);
	inorder(Node->right);
}