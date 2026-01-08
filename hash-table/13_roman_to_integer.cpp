#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    static inline const unordered_map<char, uint16_t> rti = {
        {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};

  public:
    int romanToInt(string s) {
        uint16_t count = 0;
        int len = s.length();

        for (uint8_t i = 0; i < len; i++) {
            uint16_t current = rti.at(s[i]);
            if (i < len - 1 && current < rti.at(s[i + 1])) {
                count -= current;
            } else {
                count += current;
            }
        }
        return count;
    }
};
