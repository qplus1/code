class MyLinkedList {
    public:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int val) : val(val), next(nullptr) {}
    };

    // 初始化链表
    MyLinkedList() {
        size = 0;
        dummy = new ListNode(0);
    }

    //获取地index个节点的值
    int getIndex(int index){
        if (index > (size-1) || index < 0) {
            return -1;
        }
        ListNode *cur = dummy->next;
        while(index--) {
            cur = cur->next;
        }
        return cur->val;
    }
    // 头节点前增加新节点
    void addHead(int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = dummy->next;
        dummy->next = newNode;
        size++;
    }
    
    //链表最后面增加新节点 
    void addAtTile(int val) {
        ListNode *newNode = new ListNode(val);
        ListNode *cur = head;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newNode;
        newNode->next = nullptr;
        size++;
    }
    // 第index个节点前增加新节点
    void addAtindex(int index, int val) {
        ListNode *newNode = new ListNode(val);
        ListNode *cur = dummy;
        while (index--) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }
    
    // 删除第index个节点
    void deleteAtIndex(int index) {
        ListNode *cur = dummy;
        while (index--) {
            cur = cur->next;
        }
        ListNode *temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        size--;
    }





    private:
    int size;
    ListNode *dummy;
}