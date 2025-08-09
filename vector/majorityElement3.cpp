#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int freq= 1;
        int ans=0;

        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                freq++;
            } else {
                freq = 1;
            }
            if(freq > n/2) {
                ans = nums[i];
                return ans;
            }
        }
        return ans;
    }

    int main() {
        vector<int> nums ;
        int input;
        cout << "Enter numbers (end with -1): ";
        while (cin >> input && input != -1) {
            nums.push_back(input);
        }
        int result = majorityElement(nums);
        if (result != -1) {
            cout << "Majority element: " << result << endl;
        } else {
            cout << "No majority element found." << endl;
        }
        return 0;
    }
