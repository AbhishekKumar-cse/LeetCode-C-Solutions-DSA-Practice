#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        for(int val : nums){
            int freq =0;
            for(int element : nums){
                if(element == val){
                    freq ++;

                }
            }
            if (freq >n/2)
            return val;
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}