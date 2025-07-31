#include<iostream>
#include<vector>
using namespace std;
#include<unordered_set>

int subarrayBitwiseOR(vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> result;
    unordered_set<int> prev;
    for (int i = 0; i < n; i++) {
        unordered_set<int> current;
        current.insert(arr[i]);
        for (auto x : prev) {
            current.insert(x | arr[i]);
        }
        result.insert(current.begin(), current.end());
        prev = current;
    }

    return result.size();
}

int main() {
    vector<int> arr = {1, 2, 3};
    int result = subarrayBitwiseOR(arr);
    cout << "Number of unique bitwise OR results: " << result << endl;
    return 0;
}