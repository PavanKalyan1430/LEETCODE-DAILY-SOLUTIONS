
void BFS(TreeNode* root, queue<TreeNode*> q, vector<vector<int>> &result){

    if (!root) return;

    q.push(root);
    int count = 0;

    while(!q.empty()){
        count += 1;
        int size = q.size();
        vector <int> level;

        for (int i=0; i<size ; i++){
            TreeNode* curr = q.front();
            q.pop();

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);

            level.push_back(curr->val);
        }

        if (count % 2 == 0){
            reverse(level.begin(), level.end());
            result.push_back(level);
        }
        else result.push_back(level);

    }


}

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        queue<TreeNode*> q;

        BFS(root, q,result);

         //reverse(result.begin(), result.end());
         return result;
    }
};



