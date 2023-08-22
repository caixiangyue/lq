#include "0001.h"
#include "0024.h"
#include <gtest/gtest.h>

TEST(S0001, Normal) {
    s0001::Solution s;
    std::vector<int> v1 = {1,2,3};
    std::vector<int> v2 = {1,1,1};
    EXPECT_EQ(std::vector({0,1}), s.twoSum(v1, 3));
    EXPECT_EQ(std::vector({0,1}), s.twoSum(v2, 2));
}

s0024::ListNode* createList(vector<int> v) {
    s0024::ListNode* head = new s0024::ListNode(v[0]);
    s0024::ListNode* tmp = head;
    for (int i=1; i<v.size(); i++) {
        s0024::ListNode* node = new s0024::ListNode(v[i]);
        tmp->next = node;
        tmp = tmp->next;
    }
    return head;
}

TEST(S0024, Normal) {
    s0024::Solution s;
    s0024::ListNode* t1 = createList(vector<int>{1,2,3,4});
    s0024::ListNode* r = s.swapPairs(t1);
    vector<int> exp({2,1,4,3});
    for (int i=0; i<exp.size(); i++) {
        EXPECT_EQ(exp[i], r->val);
        r = r->next;
    }
}
