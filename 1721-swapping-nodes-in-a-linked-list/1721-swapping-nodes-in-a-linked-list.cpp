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
        int count = 0;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        curr = head;
        int last = count - k + 1, i = 1;
        ListNode* temp;
        ListNode* templ;
        while (i <= count) {
            if (i == k) {
                temp = curr;
            }
            if (i == last) {
                templ = curr;
            }
            curr = curr->next;
            i++;
        }
        swap(temp->val, templ->val);
        return head;
    }
};