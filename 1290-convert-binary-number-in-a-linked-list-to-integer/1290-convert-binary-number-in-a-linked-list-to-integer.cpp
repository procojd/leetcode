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
    int getDecimalValue(ListNode* head) {
        int sum=0;
        if(head==NULL)
            return NULL;
        ListNode*prev=NULL;
        ListNode*next=NULL;
      while(head)
      {
          next=head->next;
          head->next=prev;
          prev=head;
          head=next;
          
      }
        int i=0;
        while(prev)
        {
            int power=pow(2,i);
            sum+=(prev->val)*power;
            i++;
            prev=prev->next;
        }
        return sum;
    }
};