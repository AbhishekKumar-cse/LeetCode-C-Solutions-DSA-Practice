#include<iostream>
#include<vector>
#include<string>

using namespace std;



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

    for (int i = 0; i < strs[0].size(); i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
           
            if (i >= strs[j].size() || strs[j][i] != ch) {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
        
    }
};


int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << sol.longestCommonPrefix(strs) << endl;  // Output: "fl"
    return 0;
}