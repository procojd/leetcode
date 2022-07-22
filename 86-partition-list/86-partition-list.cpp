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
    ListNode* partition(ListNode* head, int x) {
       ListNode*small=new ListNode(0); 
       ListNode*large=new ListNode(0);
        
        ListNode*smallele=small;
        ListNode*largeele=large;
        while(head!=NULL)
        {
            if(head->val<x)
            {
                smallele->next=head;
                smallele=smallele->next;
            }
            else {
                largeele->next=head;
                largeele=largeele->next;
            }
            head=head->next;
        }
        largeele->next=NULL;
        smallele->next=large->next;
        
        return small->next;
    }
};