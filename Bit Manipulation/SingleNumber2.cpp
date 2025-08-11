#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int n = nums.size();
    int res =0;
     for (int i = 0; i < 32; i++) {
        int sum = 0;
        for (int num : nums) {
            if ((num >> i) & 1) {
                sum++;
            }
        }
        if (sum % 3 != 0) {
            res |= (1 << i);
        }
    }
    return res;
    

}
int main() {
    vector<int> nums = {2, 2, 3, 2};
    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}
