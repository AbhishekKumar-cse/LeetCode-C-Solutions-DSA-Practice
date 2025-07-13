/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:
Input: nums = [2,2,1]
Output: 1*/
#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums){
    int ans=0;
    for(int i=0; i<nums.size(); i++){
        ans^= nums[i];// Using XOR operation to find the single number
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers (each number appears twice except one):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The single number is: " << singleNumber(nums) << endl;

    return 0;
}