#include "Solution_of_Leet.h"
vector<int> resultsArray2(vector<int>& nums, int k) {
    vector<int> res(nums.size() - k + 1, -1);//��������ĳ����Ѷ���nums.size()-k+1��
    if (k == 1) {
        return nums;
    }
    int ans = 1;
    /*��¼��ǰ������Ԫ�ظ�������ans>=k�������ǰԪ�ؼ���ǰ(k-1)��Ԫ�������������������ġ�
    �����ֲ�����������Ԫ�أ�ans��������һ��Ԫ������Ϊ1��*/
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