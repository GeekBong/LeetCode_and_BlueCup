#include "Solution_of_Leet.h"
vector<int> resultsArray2(vector<int>& nums, int k) {
    vector<int> res(nums.size() - k + 1, -1);//返回数组的长度已定（nums.size()-k+1）
    if (k == 1) {
        return nums;
    }
    int ans = 1;
    /*记录当前递增的元素个数，若ans>=k则表明当前元素及其前(k-1)歌元素是依次连续且上升的。
    若出现不连续递增的元素，ans在他的下一个元素重置为1。*/
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] - nums[i - 1] != 1) {
            ans = 1;
            continue;
        }
        ans++;
        if (ans >= k) {
            res[i - k + 1] = nums[i];
        }
    }
    return res;
}