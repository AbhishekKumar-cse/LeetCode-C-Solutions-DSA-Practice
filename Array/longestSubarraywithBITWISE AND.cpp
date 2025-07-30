#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();

        int maxVal=*max_element(nums.begin(), nums.end());
        int maxLen=0, currentLen =0;

        for(int i=0; i<n; i++){
            if(nums[i] == maxVal){
                currentLen++;
                maxLen = max(maxLen , currentLen);
            } else {
                currentLen = 0;
        }
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 2, 1, 3, 4, 5};
    int result = sol.longestSubarray(nums);
    cout << "Longest subarray length: " << result << endl;
    return 0;
}