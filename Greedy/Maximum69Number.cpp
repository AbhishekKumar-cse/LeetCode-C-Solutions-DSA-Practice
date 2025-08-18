#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int temp =num;
        int idx =-1;
        int pos =0;
       while(temp>0){
        if(temp % 10 == 6){
            idx = pos;
        }
        temp /=10;
        pos++;
       
       }
      if (idx != -1) {
            num += 3 * pow(10, idx); 
        }
    return num;
    }
};

int main(){
    Solution sol;
    cout << sol.maximum69Number(9669) << endl;  // Output: 9969
    cout << sol.maximum69Number(9996) << endl;  // Output: 9999
    return 0;
}