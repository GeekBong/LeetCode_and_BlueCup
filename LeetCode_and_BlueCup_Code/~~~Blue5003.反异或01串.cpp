//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//int main()
//{
//    // 请在此输入您的代码
//    //①T中1的个数很少②T中1的个数较多，需要从0反异或为1
//    string str;
//    cin >> str;
//    int num_of_zero = -1;//记录需要添加的0各个数(因为“01”已经包含一个‘1’和一个‘0’，所以记录从-1开始)
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] == '0')
//            num_of_zero++;
//    }
//    if (num_of_zero > str.length() - 2 - num_of_zero/*新添加的字符数-新添加的‘0’的个数=新添加的‘1’的个数*/) {
//        cout << str.length() - 2 - num_of_zero;
//    }
//    else
//        cout << num_of_zero;
//    return 0;
//}