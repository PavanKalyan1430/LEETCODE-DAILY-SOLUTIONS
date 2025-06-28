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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        int index =0,count=0;

        vector <int> v;

        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        reverse(v.begin(), v.end());

        for (int i : v){
            cout<<i<<" ";
            count+=1;
        }

        temp = head;
      
      while(temp){
        temp->val = v[index];
        index++;
        temp = temp->next;
      }
        


        

        return head;

    }
};