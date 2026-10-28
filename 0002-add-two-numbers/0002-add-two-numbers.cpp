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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr = l1;
        ListNode* curr2 = l2;
        ListNode* prev;
        ListNode* prev2;
        int c1=0,c2=0,sum=0;
        while(curr!=NULL){
            c1++;
            curr = curr->next;
        }
        while(curr2!=NULL){
            c2++;
            curr2 = curr2->next;
        }
        if(c1>=c2)
        {
            curr = l1;
            curr2 = l2;
            while(curr2!=NULL){
                sum += curr->val+curr2->val;
                if(sum > 9){
                    curr->val = sum%10;
                    sum = sum/10;
                }
                else{
                    curr->val = sum;
                    sum = 0;
                }
                prev = curr;
                curr = curr->next;
                curr2 = curr2->next;
            }
            while(curr!=NULL){
                sum += curr->val;
                if(sum > 9){
                    curr->val = sum%10;
                    sum = sum/10;
                }
                else{
                    curr->val = sum;
                    sum = 0;
                }
                prev = curr;
                curr = curr->next;
            }
            if(curr == NULL && sum >0){
                ListNode* next = new ListNode(sum);
                prev->next= next;
            }
            if(sum > 0){
                ListNode* next = new ListNode(sum);
                prev->next= next;
            }
            return l1;
        }
        else if(c2>c1){
            curr = l1;
            curr2 = l2;
            while(curr!=NULL){
                sum += curr->val+curr2->val;
                if(sum > 9){
                    curr2->val = sum%10;
                    sum = sum/10;
                }
                else{
                    curr2->val = sum;
                    sum = 0;
                }
                prev = curr2;
                curr = curr->next;
                curr2 = curr2->next;
            }
            while(curr2!=NULL){
                sum += curr2->val;
                if(sum > 9){
                    curr2->val = sum%10;
                    sum = sum/10;
                }
                else{
                    curr2->val = sum;
                    sum = 0;
                }
                prev2 = curr2;
                curr2 = curr2->next;
            }
            if(curr == NULL && sum >0){
                ListNode* next = new ListNode(sum);
                prev2->next= next;
            }
            if(sum > 0){
                ListNode* next = new ListNode(sum);
                prev2->next = next;
            }
        }
        return l2;
    }
};
