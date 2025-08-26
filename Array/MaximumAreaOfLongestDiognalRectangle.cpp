#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = -1;
        int maxArea = -1;

        for (auto &rect : dimensions) {
            int l = rect[0];
            int w = rect[1];

            int diagSquared = l * l + w * w; // avoid sqrt
            int area = l * w;

            if (diagSquared > maxDiagonal) {
                maxDiagonal = diagSquared;
                maxArea = area;
            } else if (diagSquared == maxDiagonal && area > maxArea) {
                maxArea = area;
            }
        }

        return maxArea;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> dimensions = {{1, 2}, {3, 4}, {5, 6}};
    int result = sol.areaOfMaxDiagonal(dimensions);
    cout << "Maximum area of the rectangle with the longest diagonal is: " << result << endl;
    return 0;
}