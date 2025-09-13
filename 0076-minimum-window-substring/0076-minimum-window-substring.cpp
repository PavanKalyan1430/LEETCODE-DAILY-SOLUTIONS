class Solution {
public:
    string minWindow(string nums, string t) {
        
        unordered_map <char, int> check;
        unordered_map <char , int> m;

        int  start;
        int  left = 0;
        int  len = 0;
        int need_count;
        int have_count = 0;
        int min_len =INT_MAX;
        string result= "";

       for (int i=0; i<t.size(); i++){
        check[t[i]]++;
       }

       need_count = check.size();


        for (int right = 0; right<nums.size(); right++){
 
            m[nums[right]]++;

            if (check.count(nums[right]) and check[nums[right]] == m[nums[right]] ){
                have_count ++;
            }

            while ( have_count >= need_count ){

                if (have_count == need_count){
                    len =  right-left+1;

                    if (len < min_len){
                        min_len = len;
                        start = left;
                    }

                }

                if (check.count(nums[left]) and m[nums[left]] == check[nums[left]]  ) have_count--;

                m[nums[left]]--;
                if (m[nums[left]] == 0) m.erase(nums[left]);
                left++;
            }
        }


        return (min_len != INT_MAX) ? nums.substr(start, min_len) : "";

    }
};