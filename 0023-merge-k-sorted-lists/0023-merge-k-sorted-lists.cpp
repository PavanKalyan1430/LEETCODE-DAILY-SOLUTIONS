ListNode* merge(ListNode* list1, ListNode* list2){
    // ListNode* dummy = new ListNode(-1);
    // ListNode*
        ListNode* dummy = new ListNode(-1);
        ListNode* start = dummy;

        while(list1 and list2){
            if (list1->val <= list2->val){
                start->next = list1;
                list1 = list1->next;
            }

            else {
                start->next = list2;
                list2 = list2->next;
            }

            start = start->next;
        }

        if (!list1) start->next = list2;
        else start->next = list1;

    return dummy->next;
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
       ListNode* result ;

       if (lists.size() == 0 ) return NULL;
       if (lists.size() == 1) return lists[0];

        for (int i=0; i<lists.size()-1; i++){
            lists[i+1]  = merge(lists[i] , lists[i+1]);
        }

        return lists[lists.size()-1];






    }
};