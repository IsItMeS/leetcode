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
void sortList(ListNode* head)
{
    int n = 0;

    ListNode* temp = head;
    while(temp != nullptr)
    {
        n++;
        temp = temp->next;
    }

    for(int i = 0; i < n - 1; i++)
    {
        ListNode* curr = head;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(curr->val > curr->next->val)
            {
                swap(curr->val, curr->next->val);
            }

            curr = curr->next;
        }
    }
}
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* it = list1;
        ListNode* next = list1;
        if (list1 == nullptr && list2 != nullptr) return list2;
        else if (list1 != nullptr && list2 == nullptr) return list1;
        else if (list1 == nullptr && list2 == nullptr) return list1; 
        next = it -> next;
        while (next != nullptr) {
            next = next->next;
            it = it->next;
        }
        it -> next = list2;
        sortList(list1);
        return list1;
    }
};