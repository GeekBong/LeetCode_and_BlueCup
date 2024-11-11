#include"Solution_of_leet.h"
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> res;
    for (int i = 0; i < nums.size() / 2; i++) {
        res.push_back(nums[i]);
        res.push_back(nums[nums.size() / 2 + i]);
    }
    return res;
}