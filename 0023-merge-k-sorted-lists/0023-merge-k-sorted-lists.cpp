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

 ListNode* merge(ListNode* l1 , ListNode* l2){

     ListNode* dummy = new ListNode(-1);
     ListNode* start = dummy;

     while(l1 and l2){
        if (l1->val <= l2->val){
            start->next = l1;
            l1 = l1->next;
        }

        else {
            start->next = l2;
            l2 = l2->next;
        }

        start = start->next;
     }

     if (l1) start->next = l1;
     else start->next = l2;

     return dummy->next;
    

 }

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.size() == 0) return NULL;
         if (lists.size()==1) return lists[0];
        
        ListNode* dummy = new ListNode(-1);
        ListNode* start = dummy;

        for (int i=0; i<lists.size()-1; i++){
            lists[i+1] = merge(lists[i], lists[i+1]);
        }

        return (lists.back());

    }
};