/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
Node* flattenHelper(Node* head) {
    Node* curr = head;
    Node* tail = head;
    while (curr != nullptr) {
        if (curr->child != nullptr) {
            Node* nextNode = curr->next;
            Node* childTail = flattenHelper(curr->child);
            curr->next = curr->child;
            curr->child->prev = curr;
            if (nextNode != nullptr) {
                childTail->next = nextNode;
                nextNode->prev = childTail;
            }
            curr->child = nullptr;
            curr = childTail;
        }
        tail = curr;
        curr = curr->next;
    }
    return tail;
}

class Solution {
public:
    Node* flatten(Node* head) {
        if (head == nullptr) return head;
        flattenHelper(head);
        return head;
    }
};