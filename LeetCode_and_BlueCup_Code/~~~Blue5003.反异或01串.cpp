//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//int main()
//{
//    // ���ڴ��������Ĵ���
//    //��T��1�ĸ������٢�T��1�ĸ����϶࣬��Ҫ��0�����Ϊ1
//    string str;
//    cin >> str;
//    int num_of_zero = -1;//��¼��Ҫ��ӵ�0������(��Ϊ��01���Ѿ�����һ����1����һ����0�������Լ�¼��-1��ʼ)
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] == '0')
//            num_of_zero++;
//    }
//    if (num_of_zero > str.length() - 2 - num_of_zero/*����ӵ��ַ���-����ӵġ�0���ĸ���=����ӵġ�1���ĸ���*/) {
//        cout << str.length() - 2 - num_of_zero;
//    }
//    else
//        cout << num_of_zero;
//    return 0;
//}