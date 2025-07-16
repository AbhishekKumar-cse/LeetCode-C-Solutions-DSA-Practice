#include<iostream>
#include<vector>
using namespace std;

int maximumLength(vector<int>& nums) {
    int maxlength = 0;
    int currentLength = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            currentLength++;
            maxlength = max(maxlength, currentLength);
        } else {
            currentLength = 0;
        }
    }

    return maxlength;
}
int main() {
    vector<int> nums ;
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    int result = maximumLength(nums);
    cout << "Maximum length of positive subarray: " << result << endl;
    return 0;
}