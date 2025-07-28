#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
// Boyer-Moore Voting Algorithm
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
      int freq =0;
      int ans =0;
      for(int i=0; i<n; i++){
        if(freq==0){
            ans= nums[i];
        }
        if(ans == nums[i]){
            freq++;
        } else{
            freq--;
        }
      }
      return ans;
    }
};
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    int result = sol.majorityElement(nums);
    cout << "Majority element: " << result << endl;
    return 0;
}