#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int n =nums.size();

        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    int val;
    cout << "Enter the value to remove: ";
    cin >> val;

    Solution sol;
    int newSize = sol.removeElement(nums, val);

    cout << "Array after removal: ";
    for(int i=0; i<newSize; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}