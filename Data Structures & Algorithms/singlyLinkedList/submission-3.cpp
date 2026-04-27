class LinkedList {
public:
    struct Node{
        int value = 0;
        Node * next = nullptr;
    };

    Node * head; // start of LL
    int size;   // keeps track of size

    LinkedList() { 
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        Node * curr = head;
        if(index >= size) return -1;

        int i = 0;
        while(i < index){
            curr = curr->next;
            i++;
        }
        return curr->value;
    }

    void insertHead(int val) {
        Node * newHead = new Node();
        newHead->value = val;
        newHead->next = head;
        head = newHead;

        size++;
    }
    
    void insertTail(int val) {
        Node * newTail = new Node();
        newTail->value = val;
        
        if(head == nullptr){
            head = newTail;
        }else{
            Node * curr = head; 
            while(curr->next != nullptr){
                curr = curr->next;
            }
            curr->next = newTail;
        }
        size++;
    }

    bool remove(int index) {
        Node * prev = head;
        Node * curr = head;
        
        if(index >= size) return false;
        // remove head
        if(index == 0){
            head = head->next;
            delete curr;
            size--;
            return true;
        }

        int i = 0;
        while(curr->next != nullptr && i != index){
            prev = curr;
            curr = curr->next;
            i++;
        }

        if(curr->next != nullptr){
            prev->next = curr->next;
        } 

        delete curr;
        size--;
        return true;    
    }

    vector<int> getValues() {
        std::vector<int> allValues;
        Node * curr = head;
        while(curr != nullptr){
            allValues.push_back(curr->value);
            curr = curr->next;
        }
        return allValues;
    }
};
