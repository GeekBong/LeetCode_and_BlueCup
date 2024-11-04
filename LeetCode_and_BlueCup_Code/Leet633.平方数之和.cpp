#include "Solution_of_Leet.h"
class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c == 0)
            return true;
        //±©Á¦
        for (int i = 0; i < sqrt(c); i++) {
            double j_2 = c - i * i;
            double j = sqrt(j_2);
            if (j == (int)j) {
                return true;
            }
        }
        return false;
    }
};