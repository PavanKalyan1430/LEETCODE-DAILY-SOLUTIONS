// int convert()

int fun(TreeNode* root, string &temp){

    if (!root){
        return 0;
    }
    
    temp += (root->val + '0');

    if (!root->left && !root->right){
        cout<<temp<<"  ";
        int val =  stoi(temp, nullptr, 2);
        temp.pop_back();
        return val;    
    }



    int left = fun(root->left, temp);
    int right = fun(root->right , temp);
    temp.pop_back();


    return left + right;

}


class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        
        string temp = "";
        return fun(root, temp);


    }
};