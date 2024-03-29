class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
          stack<TreeNode*>stack;
          while (root || !stack.empty()) {
            while (root) {
            stack.push(root);
            root = root->left;
            }
            if (!stack.empty()) {
            root = stack.top();
            stack.pop();
            if (--k == 0) return root->val;
            root = root->right;
            }
         }
    return 1;  
    }
};