#include "common.h"

namespace s0069 {
    class Solution {
    public:
        int mySqrt(int x) {
            if (x<2) return x;
            long a = x/2;
            while(a*a > x) {
                a=(a+x/a)/2;
            }
            return a;
        }
    };
}