#include "Solution_of_Leet.h"
int main() {
	/*3254. 长度为 K 的子数组的能量值 I*/
	vector<int> nums1 = { 1,2,3,4,3,2,5 }; int k1 = 3;
	vector<int> res1 = resultsArray(nums1,k1);
	cout << "test1:";
	for (int i = 0; i < res1.size(); i++) {
		cout << res1[i] << ",";
	}
	vector<int> nums2 = { 1 }; int k2 = 1;
	vector<int> res2 = resultsArray(nums2, k2);
	cout << endl;
	cout << "test2:";
	for (int i = 0; i < res2.size(); i++) {
		cout << res2[i] << ",";
	}
}