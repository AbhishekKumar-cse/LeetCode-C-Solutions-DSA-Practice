#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1;                   // start from 1 to avoid A[mid - 1] out of bounds
        int end = A.size() - 2;       // end at size-2 to avoid A[mid + 1] out of bounds

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid; // peak element found
            } else if (A[mid] < A[mid + 1]) {
                st = mid + 1; // move right
            } else {
                end = mid - 1; // move left
            }
        }

        return -1; // shouldn't reach here if input is valid mountain array
    }
};
int main() {
    Solution sol;
    vector<int> A = {0, 2, 4, 6, 5, 3, 1};

    int peakIndex = sol.peakIndexInMountainArray(A);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak value: " << A[peakIndex] << endl;

    return 0;
}