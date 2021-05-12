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
	 * @param root TreeNode¿‡ the root of binary tree
	 * @return int’˚–Õvector<vector<>>
	 */
	vector<int> preorder;
	vector<int> inorder;
	vector<int> postorder;


	void preOrder(TreeNode* root)
	{
	if (!root)
		return;
	preorder.push_back(root->val);
	preOrder(root->left);
	preOrder(root->right);

	}
	void inOrder(TreeNode* root)
	{
		if (!root)
			return;
		inOrder(root->left);
		inorder.push_back(root->val);
		inOrder(root->right);

	}
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
