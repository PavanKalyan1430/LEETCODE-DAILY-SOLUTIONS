/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_map <int , int> m;

        for (int i: nums){
            if (!m.count(i)) m[i] =1;
   
        }
        

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        dummy->next = head;


        while(curr and curr->next){
            if (m.count(curr->next->val) ){
                curr->next = curr->next->next;
            }
            else curr = curr->next;
        }

        return dummy->next;




    }
};