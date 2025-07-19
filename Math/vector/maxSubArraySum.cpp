#include<iostream>
#include <climits>
#include<vector>
using namespace std;

int maxSubArray( vector<int>& nums){

    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        currentSum += nums[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    int result = maxSubArray(nums);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}