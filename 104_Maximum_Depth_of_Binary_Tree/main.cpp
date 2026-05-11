#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode* root) {
	if (!root) {
		return 0;
	}
	return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main() {
    TreeNode* root = new TreeNode(1, new TreeNode(2, new TreeNode(3, new TreeNode(5, new TreeNode(6), nullptr), nullptr), 
		new TreeNode(2)), new TreeNode(2, new TreeNode(2), new TreeNode(2, new TreeNode(4, new TreeNode(3), nullptr), 
			new TreeNode(5, nullptr, new TreeNode(7)))));

	cout << maxDepth(root) << endl;

	return 0;
};