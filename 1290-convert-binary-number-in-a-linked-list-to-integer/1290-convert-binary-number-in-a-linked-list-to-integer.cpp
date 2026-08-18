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
        ListNode* curr = head;
        int count=0,sum=0;
        if(head==nullptr)
        return head->val;
        while(curr!=nullptr)
        {
            count++;
            curr = curr -> next;
        }
        curr = head;
        count--;
        while (curr!=nullptr)
        {
            sum += curr->val * pow(2,count);
            count--;
            curr = curr -> next;
        }
        return sum;
    }
};