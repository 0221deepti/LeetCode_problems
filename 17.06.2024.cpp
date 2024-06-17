Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.
***********************
class Solution {
public:
    bool judgeSquareSum(int c) {
 for (int divisor = 2; divisor * divisor <= c; divisor++) {
            if (c % divisor == 0) {
                int exponentCount = 0;
                while (c % divisor == 0) {
                    exponentCount++;
                    c /= divisor;
                }
                if (divisor % 4 == 3 && exponentCount % 2 != 0) {
                    return false;
                }
            }
        }
        return c % 4 != 3;
    }
};
