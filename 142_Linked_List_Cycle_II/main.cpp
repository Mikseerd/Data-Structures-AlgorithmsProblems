class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (!head) {
            return head;
        }
        ListNode* a = head;
        ListNode* b = head;
        do {
            a = a->next;
            if (!a) {
                break;
            }
            b = b->next;
            if (!b) {
                break;
            }
            b = b->next;
            if (!b) {
                break;
            }
        } while (a != b);
        if (!a or !b) {
            return NULL;
        }
        b = head;
        while (b != a) {
            b = b->next;
            a = a->next;
        }
        return b;
    }
};