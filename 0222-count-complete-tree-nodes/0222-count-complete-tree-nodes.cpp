
void HelperFunction(TreeNode* root, vector <int>&res){

    if (root == NULL) return ;

    res.push_back(root->val);

    HelperFunction (root->left, res);

    HelperFunction( root->right, res);

}



class Solution {
public:
    int countNodes(TreeNode* root) {
        
        vector <int > res;

        HelperFunction(root, res);

        return res.size();


    }
};