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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        if(head == NULL || head->next == NULL)
            return head;
        int count=1;
        while(curr->next!=NULL){
            curr = curr->next;
            count++;
        }
        k = k%count;
        curr->next=head;
        ListNode* prev = head;
        for(int i=0;i<count-k-1;i++){
            prev = prev->next;
        }
        ListNode* temp = prev->next;
        prev->next=NULL;
        return temp;
    }
};