#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int *loc = &nums[0];
        int *val = &nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (*loc != *val) {
                loc++;
                *loc = *val;
            }
            val++;
        }
        return ((loc - &nums[0]) + 1);
    }
};
