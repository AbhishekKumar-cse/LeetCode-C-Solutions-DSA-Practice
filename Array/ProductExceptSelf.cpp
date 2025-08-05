#include<iostream>
#include<vector>
using namespace std;

/*class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
     vector<int>suffix(n,1);
    //prefix
     for(int i=0; i<n; i++){
        prefix[i]=prefix[i-1]*nums[i-1];
     }
     //Suffix
     suffix[n-1]=1;
     for(int i=n-2; i>=0; i++){
        suffix[i]=suffix[i+1]*nums[i+1];
     }

     //ans
     for(int i=0; i<n; i++){
        ans[i]=prefix[i]*suffix[i];
     }
     return ans;
    }
}; 


vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i=0; i<n; i++){
            int prod=1;
            for(int j=0; j<n; j++){
                if(i!=j){
                    prod*=nums[i];
                }
                ans[i]=prod;
            }
        }
        return ans;
    }
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix pass
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        // Suffix pass
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main() {
    // Step 1: Input the size of the array
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Step 2: Input the array elements
    vector<int> nums(n);
    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Step 3: Display the input array
    cout << "Input array: ";
    for (int i = 0; i < n; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Step 4: Create Solution object and call productExceptSelf
    Solution sol;
    vector<int> result = sol.productExceptSelf(nums);

    // Step 5: Display the result
    cout << "Product of Array Except Self: ";
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    // Step 6: Explanation
    cout << "Each output element is the product of all elements in the array except itself." << endl;

    return 0;
}