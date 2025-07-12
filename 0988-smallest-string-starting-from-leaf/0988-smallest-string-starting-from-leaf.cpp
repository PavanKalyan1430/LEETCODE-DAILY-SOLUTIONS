void HelperFunction(TreeNode* root, string &result , string temp){

    if (!root) return;

    temp = char('a' + root->val) + temp ;

    if (!root->left and !root->right){
       // reverse(temp.begin(), temp.end());

        if (result == ""){
            result = temp;
        }
        else if (temp < result){
            result = temp;
        }
    }

    

    HelperFunction(root->left, result, temp);

    HelperFunction(root->right, result, temp);

}


class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {

        if (!root) return "";
        string result = "";
        string temp = "";
        
        HelperFunction(root, result, temp);

        return result;
        
    }
};