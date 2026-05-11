class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while (b != NULL && b->next != NULL) {
            a = a->next;
            b = b->next->next;
            if (a == b) {
                return true;
            }
        }
        return false;
    }
};