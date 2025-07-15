#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool hasVowel = false;
        bool hasConsonant = false;

        for (int i = 0; i < word.length(); i++) {
            char c = word[i];

            if (!isalnum(c)) {
                // Not a letter or digit
                return false;
            }

            if (isalpha(c)) {
                if (isVowel(c)) {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            }
        }

        return hasVowel && hasConsonant;
    }
};


int main() {
    Solution sol;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    if (sol.isValid(word)) {
        cout << "Valid\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}
