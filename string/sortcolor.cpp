#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& A) {
        int n = A.size();
       int low =0 , mid =0, high = n-1;

       while(mid<=high){
        if( A[mid]==0){
            swap(A[low],A[mid]);
            low++;
            mid++;
        } else if(A[mid]==1){
            mid++;
        } else{
            swap(A[high], A[mid]);
            high--;
        }
       }
    }
};

int main(){
    Solution sol;
    vector<int> colors = {2, 0, 2, 1, 1, 0};
    sol.sortColors(colors);
    for(int i=0; i<colors.size(); i++){
        cout << colors[i] << " ";
    }
    return 0;
}