#include "Solution_of_Leet.h"
vector<int> resultsArray(vector<int>& nums, int k) {
    vector<int> res;
    int i, j;
    for (i = 0; i <= nums.size() - k; i++) {
        for (j = i + 1; j < i + k; j++) {
            if (nums[j] - nums[j-1] != 1) {
                res.push_back(-1);
                break;
            }
        }
        if(j==i+k)
            res.push_back(nums[i + k - 1]);
    }
    return res;
}
