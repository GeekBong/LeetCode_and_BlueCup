#include<iostream>
using namespace std;
#include<string>
#include<vector>

//263. ����
bool isUgly(int num);
//769. ������������Ŀ�
int maxChunksToSorted(vector<int>& arr);
//3254. ����Ϊ K �������������ֵ I
vector<int> resultsArray1(vector<int>& nums, int k);
//3255. ����Ϊ K �������������ֵ II
vector<int> resultsArray2(vector<int>& nums, int k);

//51. N �ʺ�
typedef class Solution
{
    bool checkCol[10], checkDig1[20], checkDig2[20];
    vector<vector<string>> ret;
    vector<string> path;
    int n;
    int count = 0;
public:
    vector<vector<string>> solveNQueens(int _n)
    {
        n = _n;
        path.resize(n);
        for (int i = 0; i < n; i++)
            path[i].append(n, '.');
        dfs(0);
        return ret;
    }
    int totalNQueens(int _n)
    {
        n = _n;
        path.resize(n);
        for (int i = 0; i < n; i++)
            path[i].append(n, '.');
        dfs(0);
        return count;
    }

    void dfs(int row)
    {
        if (row == n)
        {
            ret.push_back(path);
            return;
        }

        for (int col = 0; col < n; col++)//��������һ�зŻʺ�
        {
            //��֦
            if (!checkCol[col] && !checkDig1[row - col + n] && !checkDig2[row + col])
            {
                path[row][col] = 'Q';
                checkCol[col] = checkDig1[row - col + n] = checkDig2[row + col] = true;
                dfs(row + 1);
                //�ָ��ֳ�
                path[row][col] = '.';
                checkCol[col] = checkDig1[row - col + n] = checkDig2[row + col] = false;
            }
        }
    }
}Solution;