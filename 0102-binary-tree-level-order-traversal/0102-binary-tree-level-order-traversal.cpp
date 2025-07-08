void HelperFunction(TreeNode* root, queue<TreeNode*>&q, vector<vector<int>>&result){

    if (!root) return ;

    TreeNode* ROOT;
    q.push(root);
   
     
    while(!q.empty()){

        int size = q.size();
        vector<int> level;

        for(int i=0; i<size; i++){

             ROOT = q.front();
             q.pop();

             if (ROOT->left) q.push(ROOT->left);
             if (ROOT->right) q.push(ROOT->right);\
             level.push_back(ROOT->val);

        }
        
        result.push_back(level);


    }

    

}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        queue<TreeNode*>q;
        HelperFunction(root, q,result);

        return result;
    }
};