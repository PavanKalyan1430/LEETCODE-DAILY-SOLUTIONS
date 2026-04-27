
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        
        unsigned long long maxi = 0;
        queue<pair<TreeNode*,  unsigned long long>> q;
        q.push({root, 0});

        while( !q.empty() ){
            unsigned long long first = q.front().second;
            unsigned long long last = 0;

            int sz = q.size();

            for (int i=0; i<sz; i++){
                auto node = q.front().first;
                unsigned long long index = q.front().second - first;
                last = index;

                q.pop();

                if (node->left) q.push({node->left, 2*index+1});
                if (node->right) q.push({node->right, 2*index+2});
            }

            cout<<first <<"   "<<last<<endl;

            maxi = max(maxi , last+1);
        }

        return maxi;

    }
};