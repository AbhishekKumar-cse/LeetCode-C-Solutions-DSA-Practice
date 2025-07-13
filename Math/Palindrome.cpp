/*Given an integer x, return true if x is a palindrome, and false otherwise.
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.*/

#include<iostream>
using namespace std;

bool isPalindrome(int n){
    int original = n, reversed = 0;
    while (n>0){
        // Extract the last digit and build the reversed number
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;   
        
    }
    return original == reversed;
}

int main(){
    int n;
    cout<< "enter a number:";
    cin>>n;
    if(isPalindrome(n)){
        cout<< n << " is a palindrome number." << endl;
    } else {
        cout<< n << " is not a palindrome number." << endl;
    }
}