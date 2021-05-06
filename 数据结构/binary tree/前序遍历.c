
//Ç°Ðò±éÀú
void preorder(treeNode* Node)
{
	if (!Node)
		return;
	printf("%c", Node->data);
	preorder(Node->left);
	preorder(Node->right);
}