#include<iostream>
#include<vector>
using namespace std;

/* class Solution {
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
};*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int ans=0;
        int lp=0; 
        int rp=n-1;
          while(lp<rp){
                int width= rp-lp;
               int ht=min(height[lp], height[rp]);
                int area=width*ht;
                ans=max(ans,area);

                if(height[lp]<height[rp]){
                    lp++;
                } else{
                    rp--;
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