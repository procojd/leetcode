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
    bool ispal(vector<int>&v,int &s,int&e)
    {
        while(s<=e)
        {
            if(v[s]!=v[e])
                return false;
            s++;e--;
        }
        return true;
       
        
    }
    bool isPalindrome(ListNode* head) {
        ListNode*temp=head;
        vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int s=0;int e=v.size()-1;
        return ispal(v,s,e);
    }
};