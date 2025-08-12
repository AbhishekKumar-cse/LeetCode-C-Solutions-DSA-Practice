#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxPages) {
    int studentCount = 1;
    int pagesAllocated = 0;

    for (int i = 0; i < n; i++) {
        if (pagesAllocated + arr[i] > maxPages) {
            studentCount++;
            pagesAllocated = arr[i];
            if (studentCount > m) return false;
        } else {
            pagesAllocated += arr[i];
        }
    }
    return true;
}

int findMinPages(vector<int>& arr, int n, int m) {
    int low = 0, high = 0;
    for (int i = 0; i < n; i++) {
        low = max(low, arr[i]);
        high += arr[i];
    }

    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {12, 34, 67, 90};
    int n = arr.size();
    int m = 2;  // Number of students
    int minPages = findMinPages(arr, n, m);
    cout << "Minimum pages: " << minPages << endl;
    return 0;
}