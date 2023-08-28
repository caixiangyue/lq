#include "common.h"

namespace s0019 {
    //  Definition for singly-linked list.
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode *dummyHead = new ListNode(0, head);
            ListNode *slow = dummyHead, *fast = dummyHead;
            while (n--) fast = fast->next;
            fast = fast->next;
            while (fast) {
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = slow->next->next;
           
            return dummyHead->next;
        }
    };
}