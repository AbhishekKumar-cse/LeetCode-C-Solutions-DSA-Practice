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
int main(){
        vector<long long> testCases = {43261596, 4294967293};
        Solution sol;
        for (long long n : testCases) {
            cout << "Input: " << n << " | Reversed: " << sol.reverseBits(n) << endl;
        }
}
