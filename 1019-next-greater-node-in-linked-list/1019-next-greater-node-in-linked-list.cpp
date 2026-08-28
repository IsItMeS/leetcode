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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* curr = head;
        ListNode* slow;
        vector<int> answer;
        while(curr!=nullptr)
        {
            slow=curr->next;
            int yes=1;
            while(slow!=nullptr){
                if(slow->val > curr->val){
                    answer.push_back(slow->val);
                    yes=0;
                    break;
                }
                else
                    slow=slow->next;    
            }
            if(yes == 1)
            answer.push_back(0);
            curr=curr->next;      
        }
        return answer;
    }
};