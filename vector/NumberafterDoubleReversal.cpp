#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
 int reverseNum(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
      int reversed1 = reverseNum(num);
        int reversed2 = reverseNum(reversed1);
        return reversed2 == num;
    }
};

int main(){
    Solution sol;
    cout << sol.isSameAfterReversals(526) << endl;  // Output: 1 (true)
    cout << sol.isSameAfterReversals(180) << endl;  // Output: 0 (false)
    return 0;
}