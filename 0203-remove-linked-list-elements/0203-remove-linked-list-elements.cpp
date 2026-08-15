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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr;
        if (head == nullptr)
        return head;
        curr = head;
        while(curr->next != nullptr )
        {
            if (val == head->val)
            {
                head = curr->next;
                curr = head;
            }
            else if (curr->next->val == val)
            {
                curr->next=curr->next->next;
            }
            else
            curr = curr -> next;
        }
        if (val == head->val)
            head = curr->next;
        return head;
    }
};