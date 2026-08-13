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
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr) {
            curr = curr->next;
            count++;
        }
        if (count == n) {
            head = head->next;
            return head;
        }
        int pos = count - n - 1;
        curr = head;
        while (pos > 0) {
            curr = curr->next;
            pos--;
        }
        curr->next = curr->next->next;
        return head;
    }
};
