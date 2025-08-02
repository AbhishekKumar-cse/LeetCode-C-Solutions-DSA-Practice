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
    vector<uint32_t> testCases = {43261596, 4294967293}; // Use uint32_t here
    Solution sol;

    for (uint32_t n : testCases) {
        cout << "Input: " << n << " | Reversed: " << sol.reverseBits(n) << endl;
    }
    return 0;
}