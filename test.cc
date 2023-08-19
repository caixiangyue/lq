#include "0001.h"
#include <gtest/gtest.h>


TEST(S001, Normal) {
    s0001::Solution s;
    std::vector<int> v = {1,2,3};
    // std::vector<int> r = {0,1};
    EXPECT_EQ(std::vector<int>({0,1}), s.twoSum(v, 3));
}