#include<iostream>
#include<vector>
using namespace std;
#include<climits>
class Solution {
public:
    int divide(int dividend, int divisor) {
        
        const int a = 2147483647;
        const int b = -2147483648;
        
     
        if (dividend == b && divisor == -1)
            return a;
        

        bool negative = (dividend < 0) ^ (divisor < 0);
        

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long quotient = 0;


        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            quotient += multiple;
        }

        return negative ? -quotient : quotient;
    }
};

int main() {
    Solution sol;
    int dividend = 10;
    int divisor = 3;
    int result = sol.divide(dividend, divisor);
    cout << "Result: " << result << endl;
    return 0;
}
