#include "Solution_of_Leet.h"
int main() {
	/*3254. 长度为 K 的子数组的能量值 I*/
	/*vector<int> nums1 = { 1,2,3,4,3,2,5 }; int k1 = 3;
	vector<int> res1 = resultsArray1(nums1,k1);
	cout << "test1:";
	for (int i = 0; i < res1.size(); i++) {
		cout << res1[i] << ",";
	}
	vector<int> nums2 = { 1 }; int k2 = 1;
	vector<int> res2 = resultsArray1(nums2, k2);
	cout << endl;
	cout << "test2:";
	for (int i = 0; i < res2.size(); i++) {
		cout << res2[i] << ",";
	}*/

	/*3255. 长度为 K 的子数组的能量值 2*/
	vector<int> nums1 = { 1,2,3,4,3,2,5 }; int k1 = 3;
	vector<int> res1 = resultsArray2(nums1, k1);
	cout << "test1:";
	for (int i = 0; i < res1.size(); i++) {
		cout << res1[i] << ",";
	}

	cout << endl;

	vector<int> nums2 = { 2,2,2,2,2 }; int k2 = 4;
	vector<int> res2 = resultsArray2(nums2, k2);
	cout << "test2:";
	for (int i = 0; i < res2.size(); i++) {
		cout << res2[i] << ",";
	}

	cout << endl;

	vector<int> nums3 = { 1 }; int k3 = 1;
	vector<int> res3 = resultsArray2(nums3, k3);
	cout << "test3:";
	for (int i = 0; i < res3.size(); i++) {
		cout << res3[i] << ",";
	}
}