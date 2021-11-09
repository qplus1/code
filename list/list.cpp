#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        while (cur->next != nullptr) {
            if (cur->next->val == val) {
                ListNode* temp = cur->next;
                cur->next = cur->next->next;
                delete temp;
                temp = nullptr;
            } else {
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};
int main() {
    ListNode* one = new ListNode(1);
    ListNode* two = new ListNode(2);
    ListNode* three = new ListNode(3);
    ListNode* four = new ListNode(4);
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = nullptr;
    Solution s;
    ListNode* p = s.removeElements(one, 3);
    while(p) {
        cout << p->val << endl;
        p = p->next;
    }
    system("pause");
    return 0;
}