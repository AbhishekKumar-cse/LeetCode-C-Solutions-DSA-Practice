#include<iostream>
#include<vector>
using namespace std;

class Solution {
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