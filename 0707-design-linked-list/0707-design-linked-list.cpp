class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node* prev;
        Node (int x){
            val =x;
            prev = nullptr;
            next = nullptr;
        }
    }; 
    Node* head;
    Node* tail;
    int size;
public:
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size=0;
    }
    
    int get(int index) {
        if( index<0 || index >= size)
        return -1;
        Node* curr= head;
        for ( int i = 0;i<index; i++)
        {
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr ) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (tail == nullptr) {
            tail = newNode;
            head = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode = new Node(val);
        if (index < 0 || index > size) {
            return;
        }
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        newNode->prev = curr->prev;
        newNode->next = curr;
        curr->prev->next = newNode;
        curr->prev = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        if (index == 0) {
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            else {
                tail = nullptr;
            }
            size--;
            return;
        }
        else if (index == size - 1) {
            tail = tail->prev;
            tail->next = nullptr;
            size--;
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */