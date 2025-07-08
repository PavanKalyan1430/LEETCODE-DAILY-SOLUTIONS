void HelperFunction(TreeNode* root, int level , vector<int>&res){
    
    if (!root) return ;
    
    if (level == res.size()) res.push_back(root->val);
    
    HelperFunction(root->right, level+1, res);
    
    HelperFunction(root->left, level+1, res);
    
}
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res ;
        int level = 0;
        
        HelperFunction(root,level, res);
        
        return res;
    }
};





