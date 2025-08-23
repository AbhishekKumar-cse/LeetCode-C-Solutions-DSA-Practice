#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
         int left = 0, right = s.size() - 1;

        while (left < right) {
            
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

           
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main(){
    Solution sol;
    cout << boolalpha;  // Print bool values as true/false
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl;  // true
    cout << sol.isPalindrome("race a car") << endl;  // false
    cout << sol.isPalindrome(" ") << endl;  // true
    return 0;
}