#include<iostream>
#include<vector>
using namespace std;

 class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int width= j-i;
               int ht=min(height[i], height[j]);
                int area=width*ht;
                ans=max(ans,area);
            }
        }
        return ans;
    }
};


int main(){
   int n; 
   cin >> n;
   vector<int> height(n);
   for(int i = 0; i < n; ++i) {
       cin >> height[i];
   }
   Solution sol;
   int result = sol.maxArea(height);
   cout << result << endl;
   return 0;
}