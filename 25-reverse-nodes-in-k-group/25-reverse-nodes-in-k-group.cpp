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
    ListNode* reverse(ListNode* head, int k,int n)
    {
        if(head==NULL)
            return NULL;
        if(n<k)
            return head;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        int count=0;
        while(curr!=NULL&&count<k)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL)
        {
            head->next=reverse(next,k,n-k);
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count<k)
            return head;
        
        return reverse(head,k,count);
    }
};