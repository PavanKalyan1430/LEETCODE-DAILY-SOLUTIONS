bool fun(string &s1, string &s2){

    int l = 0;
    int r = s1.size()-1;

    bool palindrome_1 = true, palindrome_2= true;

    while(l < r){
        if (s1[l] != s1[r]){
            palindrome_1 = false;
            break;
        }
        l +=1 ; r-=1;
    }

    l= 0; r= s2.size()-1;

    while(l < r){
        if (s2[l] != s2[r]){
            palindrome_2 = false;
            break;
        }
        l +=1 ; r-=1;
    }

    return palindrome_1 || palindrome_2;
}


class Solution {
public:
    bool validPalindrome(string nums) {
        
        int flag = 0;

        int left = 0;
        int right = nums.size()-1;

        while (left < right){

            
            if (nums[left] == nums[right]){
                left+=1, 
                right-=1;
            }

            else {
                string a = nums.substr(left+1, right-left);
                string b = nums.substr(left, right-left);

                if (fun( a, b )) return true;
                else return false;
            }
            
        }

        return true;
    }
};