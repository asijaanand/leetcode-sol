#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int to_find = target - nums[i];
            if (hash.find(to_find) != hash.end()) {
                return {hash[to_find], i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
