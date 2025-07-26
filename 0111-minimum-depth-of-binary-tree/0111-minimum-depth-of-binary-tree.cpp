int DFS( TreeNode* root, int &min_height, int temp_height){

    if ( root == NULL) return 0;

    else if ( !root->left  &&  !root->right){
        min_height = min(min_height, temp_height);
    }

    DFS(root->left, min_height, temp_height +1);

    DFS(root->right, min_height, temp_height +1);

    return 0;

    

}

class Solution {
public:
    int minDepth(TreeNode* root) {
        
        int min_height = INT_MAX;
        int temp_height = 1;

        if (!root) return 0;

        DFS(root, min_height, temp_height);

        return min_height;
    }
};