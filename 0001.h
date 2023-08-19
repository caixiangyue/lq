#include "common.h"

using namespace std;
namespace s0001 {
    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> m;
            for (int i=0; i<nums.size(); i++){
                int tmp = target - nums[i];
                auto iter = m.find(tmp);
                if (iter == m.end())
                    m[nums[i]] = i;
                else
                    return {iter->second, i};
            }
            return {-1, -1};
        }
    };
}
