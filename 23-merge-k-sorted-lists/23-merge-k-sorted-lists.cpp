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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       vector<int>ans;
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp)
            {
                ans.push_back(temp->val);
                temp=temp->next;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            pq.push(ans[i]);
        }
        ListNode* root=new ListNode;
        ListNode* temp=root;
        while(!pq.empty())
        {
            ListNode* next=new ListNode(pq.top());
            temp->next=next;
            temp=temp->next;
            pq.pop();
        }
        return root->next;
    }
};