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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> result ;
        int level = 1;

        vector<int> temp;

        if (root == NULL ) return {} ;

        q.push(root);
        temp.push_back(root->val);
        result.push_back(temp);

        while(!q.empty()){

            level += 1;
            int sz = q.size();
            temp.clear();

            for (int i=0; i<sz; i++){
                TreeNode* node = q.front();  q.pop();

                if (node->left){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                }

                if (node->right){
                    q.push(node->right);
                    temp.push_back(node->right->val);
                }


            }

            if (level % 2 == 0) reverse(temp.begin(), temp.end());

            if (temp.size() != 0) result.push_back(temp);

        }

        return result;

    }
};