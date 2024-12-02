#include "Solution_of_Leet.h"

int main() {
	
	//263. Ugly Number
	/*
	std::cout << std::boolalpha;//true or false
	//cout << "test1[1](预期：true):" << isUgly(1) << endl;
	//cout << "test2[4](预期：false):" << isUgly(4) << endl;
	cout << isUgly(14);
	*/

	/*769. 最多能完成排序的块*/
	/*cout << "\ntest1(预期：1):";
	int arr1[] = { 4,3,2,1,0 };
	vector<int> v_arr1;
	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
		v_arr1.push_back(arr1[i]);
	}
	cout << maxChunksToSorted(v_arr1);

	cout << "\ntest2(预期：4):";
	int arr2[] = { 1,0,2,3,4 };
	vector<int> v_arr2;
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		v_arr2.push_back(arr2[i]);
	}
	cout << maxChunksToSorted(v_arr2);

	cout << "\ntest3(预期：2):";
	int arr3[] = { 0,1 };
	vector<int> v_arr3;
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		v_arr3.push_back(arr3[i]);
	}
	cout << maxChunksToSorted(v_arr3);

	cout << "\ntest4(预期：2):";
	int arr4[] = { 3,2,1,0,4 };
	vector<int> v_arr4;
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		v_arr3.push_back(arr3[i]);
	}
	cout << maxChunksToSorted(v_arr3);*/
	
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
	/*vector<int> nums1 = { 1,2,3,4,3,2,5 }; int k1 = 3;
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
	}*/

	//Leet51. N 皇后
	class Solution demo;
	vector<vector<string>> res = demo.solveNQueens(4);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}