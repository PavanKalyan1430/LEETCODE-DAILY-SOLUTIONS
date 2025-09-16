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

 void HelperFunction(TreeNode* root , vector<int> &result){

    if (root == NULL) return ;

    HelperFunction(root->left , result);

    result.push_back(root->val);

    HelperFunction(root->right, result);

 }

 void swap(TreeNode* root, int val1, int val2){

    if (!root) return;

    swap(root->left, val1, val2);

    if (root->val == val1)  root->val = val2;
    else if (root->val == val2) root->val = val1;

    swap(root->right, val1, val2);

 }


class Solution {
public:
    void recoverTree(TreeNode* root) {
        vector<int> result ;

        HelperFunction(root, result);
        
        int val1,  val2;

        vector <int> sortresult = result;
        sort(sortresult.begin(), sortresult.end());

        for (int i = 0; i<result.size(); i++){

            if (result[i] != sortresult[i]){
                val1 = result[i];
                val2 = sortresult[i];
                break;}
        }



        swap(root,val1, val2 );

        for (int i: result){
            cout<<i<<" ";
        }

        
    }
};