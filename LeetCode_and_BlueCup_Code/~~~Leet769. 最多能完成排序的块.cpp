#include "Solution_of_Leet.h"
int maxChunksToSorted(vector<int>& arr) {
    //�������С��Ԫ������ĺ��棬�����ͱ���ֵ�ͬһ����
    //�Ӻ���ǰ�����ǰ����Ԫ�ر����
    int res = 1;//res��¼������
    int min = arr[arr.size() - 1], max = min;
    int min_index = arr.size() - 1,max_index = min_index;
    //max��min�ֱ��¼�Ӻ���ǰ�����Ĺ�����Ԫ�ص����ֵ����Сֵ
    //�����ǰ�����Ĺ�����ĳԪ��>max,��ǰԪ�ص����һ��Ԫ�ر������ͬһ��
    //���ĳԪ��<min,���Ԫ�ؿ��Գ�һ��
    //���ĳԪ��>min,���Ԫ���Լ���ǰmin֮�������Ԫ�أ��������д���min����С�ڵ�ǰԪ�ص�Ԫ�ر�����ͬһ���У�����������
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
                    res--;//��arr[j]���뵱ǰ�ֿ飬�ֿܷ���-1
            }
        }
        if (arr[i] < min) {
            res++;//��Ԫ�ؿ����Գ�һ��
            min = arr[i];
            min_index = i;
        }
    }
    return res;
}