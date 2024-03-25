#include "common.h"

using namespace std;
namespace s0167 {
    class Solution {
        public:
            vector<int> twoSum(vector<int>& numbers, int target) {
                int i = 0, j = numbers.size()-1;
                while(i < j) {
                    int sub = target - numbers[j];
                    if (numbers[i] == sub) {
                        return vector<int>{i+1, j+1};
                    } else if(numbers[i] < sub) {
                        ++i;
                    } else {
                        --j;
                    }
                }
                return vector<int>{-1,-1};
            }
    };
}
