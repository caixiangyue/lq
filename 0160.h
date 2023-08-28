#include "common.h"

using namespace std;

namespace s0160 {
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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            int lenA = 0, lenB = 0;
            ListNode* t1 = headA, *t2 = headB;
            while (t1) {
                lenA++;
                t1 = t1->next;
            }
            while (t2) {
                lenB++;
                t2 = t2->next;
            }
            t1 = headA;
            t2 = headB;
            if (lenB > lenA) {
                swap(lenA, lenB);
                swap(t1, t2);
            }
            int val = lenA - lenB;
            while(val--) {
                t1 = t1->next;
            }

            while (t1) {
                if (t1 == t2) {
                    return t1;
                }
                t1 = t1->next;
                t2 = t2->next;
            }
            return nullptr;
        }
    };
}