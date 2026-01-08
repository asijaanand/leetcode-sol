#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lengthOfLastWord(string s) {
        uint16_t count = 0;
        uint16_t len = 0;
        for (char x : s) {
            if (x != ' ') {
                count++;
                len = count;
            } else {
                count = 0;
            }
        }
        return len;
    }
};
