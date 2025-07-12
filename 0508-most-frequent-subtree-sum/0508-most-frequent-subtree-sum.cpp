int HelperFunction(TreeNode* root, unordered_map<int,int> &m, int &max_freq){

        if (!root) return 0;

        int left = HelperFunction(root->left,m, max_freq);
        int right = HelperFunction(root->right, m, max_freq);

        int sum = left + right + root->val;

        m[sum] +=1;
        max_freq = max(max_freq, m[sum]);

        return sum;


}

class Solution {
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {

       unordered_map <int , int> m;
       vector<int> result;
       int max_freq = 0;
       HelperFunction(root,m, max_freq) ;

       for (auto i : m){
        if (i.second == max_freq){
            result.push_back(i.first);
        }
        
       }

       return result;


    }
};