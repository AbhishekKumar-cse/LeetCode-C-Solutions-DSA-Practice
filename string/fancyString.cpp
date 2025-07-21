#include<iostream>
#include<string>
#include<vector>
using namespace std;


string fancyString(const vector<string>& words) {
    string result;
    for (const auto& word : words) {
        if (!result.empty()) {
            result += " ";
        }
        result += word;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter the words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    cout << fancyString(words) << endl;
    return 0;
}