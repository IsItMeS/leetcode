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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (headA == NULL && headB == NULL)
            return NULL;
        if (headA == NULL)
            return NULL;
        if (headB == NULL)
            return NULL;
        ListNode* acurr = headA;
        while(acurr != NULL)
        {
            ListNode* bcurr = headB;
            while(bcurr != NULL)
            {
                if(acurr == bcurr)
                    return bcurr;
                bcurr = bcurr->next;
            }
            acurr = acurr->next;
        }
        return NULL;
    }
};