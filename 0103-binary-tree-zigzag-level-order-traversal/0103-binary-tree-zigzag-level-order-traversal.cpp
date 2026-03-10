
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result;
        int level = 0;

        queue<TreeNode*> q;
        if (root) q.push(root);

        while (!q.empty()){

            vector<int> temp;
            int sz = q.size();
            level +=1;

            for (int i=0; i<sz; i++){
                TreeNode* node = q.front();
                q.pop();

                temp.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (level % 2 == 0) reverse(temp.begin(), temp.end());
            result.push_back(temp);

        }

        return result;
    }
};