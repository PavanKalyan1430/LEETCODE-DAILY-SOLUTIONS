void HelperFunction(TreeNode* root, string &result , string temp){

    if (!root) return;

    temp += ('a' + root->val);

    if (!root->left and !root->right){
        reverse(temp.begin(), temp.end());

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
        //int res = 0;
        string result = "";
        string temp = "";
        //string Tresult;

        HelperFunction(root, result, temp);

        return result;
        
    }
};