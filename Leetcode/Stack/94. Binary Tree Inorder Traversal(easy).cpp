/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        TreeNode* node=root;
        if(root==NULL) return {};
        while(node!=NULL || !st.empty()){
            if(node==NULL){
                ans.push_back(st.top()->val);
                node = st.top()->right;
                st.pop();
            }
            else{
                st.push(node);
                node = node->left;
            }
        }
        return ans;
    }
};
