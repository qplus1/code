Class Solution {
    public:
    struct LIstNode {
        int val; 
        ListNode *next;
        ListNode() :val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode *removeVal(ListNode *head, int val) {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *cur = dummy;
        while(cur != nullptr && cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode *temp = cur->next;
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
}