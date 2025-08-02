#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {
            ans <<= 1;        // Make space for the new bit
            ans |= (n & 1);   // Add the LSB of n to ans
            n >>= 1;          // Remove the last bit from n
        }
        return ans;
    }
};
int main() {
    uint32_t n;
    cout << "Enter a 32-bit unsigned integer: ";
    cin >> n;
    vector<uint32_t> testCases = {n};
    Solution sol;

    for (uint32_t num : testCases) {
        cout << "Input: " << num << " | Reversed: " << sol.reverseBits(num) << endl;
    }
    return 0;
}