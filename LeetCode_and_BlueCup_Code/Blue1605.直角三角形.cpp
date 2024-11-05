#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
    // 请在此输入您的代码
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a * a + b * b == c * c)
        cout << "YES";
    else if (a * a + c * c == b * b)
        cout << "YES";
    else if (b * b + c * c == a * a)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}