/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
	/**
	 *
	 * @param root TreeNodeÀà the root of binary tree
	 * @return intÕûÐÍvector<vector<>>
	 */
	
	//3个容器存放遍历的值
	vector<int> preorder;
	vector<int> inorder;
	vector<int> postorder;


	//前序遍历
	void preOrder(TreeNode* root)
	{
	if (!root)
		return;
	preorder.push_back(root->val);
	preOrder(root->left);
	preOrder(root->right);

	}
	//中序遍历
	void inOrder(TreeNode* root)
	{
		if (!root)
			return;
		inOrder(root->left);
		inorder.push_back(root->val);
		inOrder(root->right);

	}
	//后序遍历
	void postOrder(TreeNode* root)
	{
		if (!root)
			return;
		postOrder(root->left);
		postOrder(root->right);
		postorder.push_back(root->val);
	}


	vector<vector<int> > threeOrders(TreeNode* root) {

		if (!root)
		{
			vector<vector<int>> vec;
			return vec;
		}

		preOrder(root);
		inOrder(root);
		postOrder(root);

		vector<vector<int>> ret;
        
		ret.push_back(preorder);
		ret.push_back(inorder);
		ret.push_back(postorder);

		return ret;
	}
};
