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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, int> it;
        ListNode* curr = head;
        while(curr != nullptr)
        {
            it[curr]++; 
            if(it[curr] == 2) 
            return true;
            curr = curr->next;
        }
        return false;
    }
};