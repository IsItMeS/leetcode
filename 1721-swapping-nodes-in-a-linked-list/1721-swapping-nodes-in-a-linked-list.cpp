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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* node;
        int count=0,lcount,i=1,temp,templ;
        while(curr!=nullptr)
        {
            count++;
            curr = curr -> next;
        }
        curr = head;
        lcount = count-k+1;
        if (k == lcount)
            return head;
        while(curr!=nullptr)
        {
            if(i==k)
            {
                temp = curr->val;
            }
            if(i==lcount)
            {
                templ = curr -> val;
            }
            curr = curr->next;
            i++;
        }
        curr = head;
        i=1;
        while(curr!=nullptr)
        {
            if(i==k)
            {
                curr->val=templ;
            }
            else if(i==lcount)
            {
                curr->val=temp;
            }
            curr = curr->next;
            i++;
        }
        return head;
    }
};