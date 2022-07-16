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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        ListNode*temp=head;
        
        int count=0;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        count=count-n;
        if(count==0&&head->next)
            return head->next;
        if(count==0)
            return NULL;
        ListNode*temp2=head;
        while(count-1)
        {
           temp2=temp2->next;
            count--;
            
        }
        if(temp2->next->next==NULL)
        {
            temp2->next=NULL;
            return head;
        }
        temp2->next=temp2->next->next;
        return head;
        
    }
};