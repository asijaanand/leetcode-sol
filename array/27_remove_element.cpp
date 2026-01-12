#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        if (nums.size() == 0) {
            return 0;
        }
        int k = 0;
        for (int x : nums) {
            if (x == val) {
                continue;
            }
            nums[k++] = x;
        }
        return (k + 1);
    }
};
