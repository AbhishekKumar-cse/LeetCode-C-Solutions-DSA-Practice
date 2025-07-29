#include <iostream>
using namespace std;


#include <limits.h>

class Solution {
public:
    int reverse(int x) {
        int ans=0;
       
       while(x!=0){
        int digit = x%10;
        x/=10;

        if(ans>INT_MAX/10 || (ans == INT_MAX/10 && digit>8))
        return 0;
        if(ans<INT_MIN/10 || (ans == INT_MIN/10 && digit<-8))
        return 0;

        ans= ans*10 + digit;
       }
    return ans;
    }
};


int main() {
    Solution solution;
    int x;

    cout << "Enter an integer to reverse: ";
    cin >> x;

    int reversed = solution.reverse(x);
    if (reversed == 0) {
        cout << "Reversal resulted in overflow." << endl;
    } else {
        cout << "Reversed integer: " << reversed << endl;
    }

    return 0;
}