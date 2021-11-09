struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
ListNode* remove(ListNode* head, int val) {
    ListNode* dummy = new ListNode(-1);
    dummy->next = head;
    ListNode* cur = dummy;
    while (cur != nullptr && cur->next != nullptr) {
        if (cur->val == val) {
            ListNode* temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            temp = nullptr;
        } else {
        cur = cur->next; 
        }
    }
    head = dummy->next;
    delete dummy;
    dummy = nullptr;
    return head;

}

//leetcode707 设计链表
class MylinkedList{
private:
    ListNode* _dummyNode;
    int _size;
public:
    struct ListNode{
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
    };
    // 构造函数（初始化链表）
    MylinkedList() {
        _dummyNode = new ListNode(0);
        _size = 0;
    }
    // 获取第n个节点的值
    int get(int index) {
        if (index < 0 || index >= _size) {
            return -1;
        }
        ListNode* = _dummyNode->next;
        while (index--) {
            _dummyNode = _dummyNode->next;
        }
        return _dummyNode_>val;
    }
    //链表最前面插入一个节点
    void addAtHead(int val) {
        ListNode* node = new ListNode(val);
        node->next = _dummyNode->next;
        _dummyNode->next = node;
        _size++;
    }
    // 链表尾部插入
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        ListNode* cur = _dummyNode;
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = node;
        ++_size;
    }

    // 再第I个节点插入
    void addAtIndex(int index, int val) {
        if (index > _size) {
            rerturn -1;
        }
        ListNode* node = new ListNode(val);
        while (index--) {
            _dummyNode = _dummyNode->next;
        }
        node->next = _dummyNode->next;
        _dummyNode->next = node;
        ++_size;
    }

    // 再第i个节点处删除 
    void deleteAtIndex(int index) {
        if (index >= _size || index < 0) {
            return -1;
        }
        ListNode* cur = _dummyNode;
        while (index--) {
            cur = cur->next;
        }
        ListNode* temp = cur->next;
        cur->next = cur->next->next;
        delete temp;
        temp = nullptr;
        --_size;
    }

};