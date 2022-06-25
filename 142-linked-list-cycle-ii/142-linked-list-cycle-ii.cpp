/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)    //if we have null in any node that means cycle exist
            return NULL;
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast!=NULL && fast->next!=NULL){      //if any node == NULL cycle exists
            
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) 
                break;
        }
       if(fast==NULL || fast->next==NULL)       //checking if loop has ended due to condn slow==fast or due end of linked list
           return NULL;                       //if end of linked list than we return NULL;
        slow=head;
        while(slow!=fast){                  //else we start the slow from the head and increase both slow and fast at a time 
            slow=slow->next;
            fast=fast->next;
        }
        
       return slow;                         //They will coincide at the cycle node
       
    }
};
