#include "common.h"

using namespace std;
namespace s0076 {
    class Solution {
        public:
            string minWindow(string s, string t) {
                vector<int> chars(128, 0);
                vector<bool> flag(128, false);
                int ssize = s.size();
                int tsize = t.size();
                for (int i=0; i<tsize; i++) {
                    flag[t[i]] = true;
                    chars[t[i]]++;
                }

                int l=0, min_l=0, min_size=ssize+1, cnt=0;
                for (int i=0; i<ssize; i++) {
                    if(flag[s[i]]) {
                        if(--chars[s[i]] >= 0) {
                            cnt++;
                        }

                        while(cnt == tsize) {
                            if (i-l+1 < min_size) {
                                min_size = i-l+1;
                                min_l = l;
                            }
                            if (flag[s[l]] && ++chars[s[l]]>0) {
                                cnt--;
                            }
                            l++;
                        }
                    }
                }

                return min_size > ssize ? "" : s.substr(min_l, min_size);
            }
    };
}
