#include "Solution_of_Leet.h"
int maxChunksToSorted(vector<int>& arr) {
    //如果比你小的元素在你的后面，你俩就必须分到同一块中
    //从后往前：如果前面有元素比你大，
    int res = 1;//res记录分组数
    int min = arr[arr.size() - 1], max = min;
    int min_index = arr.size() - 1,max_index = min_index;
    //max和min分别记录从后往前遍历的过程中元素的最大值和最小值
    //如果向前遍历的过程中某元素>max,则当前元素到最后一个元素必须分在同一块
    //如果某元素<min,则该元素可自成一组
    //如果某元素>min,则该元素以及当前min之间的所有元素，还有所有大于min并且小于当前元素的元素必须在同一组中，分组数不变
    //3, 2, 5, 4, 7;        3,1,2, 7,5,4, 9,10,8
    //[2,3][4,5][7]

    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] > max) {
            res = 1;
            max = arr[i];
            max_index = i;
        }
        else if (arr[i] > min) {
            for (int j = i+1; arr[j] < arr[i]; j++) {
                if(arr[j]>min && arr[j] <arr[i])
                    res--;//将arr[j]归入当前分块，总分块数-1
            }
        }
        if (arr[i] < min) {
            res++;//该元素可以自成一组
            min = arr[i];
            min_index = i;
        }
    }
    return res;
}