class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node (int x){
            val =x;
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
        Node* curr = head;
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
            tail = newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
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
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index-1; i++) {
            curr = curr->next;
        }
        newNode->next=curr->next;
        curr->next=newNode;
        size++;
        return;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        if (index == 0) {
            head = head->next;
            if ( head == nullptr)
            {
                tail = nullptr;
            }
            size--;
            return;
        }
        else if (index == size - 1) {
            Node* curr = head;
            for (int i = 0; i < index-1; i++) {
            curr = curr->next;
            }
            curr->next=nullptr;
            tail = curr;
            size--;
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index-1; i++) {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        size--;
        return;
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