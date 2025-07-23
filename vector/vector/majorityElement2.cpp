#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
}

int main() {
    vector<int> nums = {3, 2, 3};
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}