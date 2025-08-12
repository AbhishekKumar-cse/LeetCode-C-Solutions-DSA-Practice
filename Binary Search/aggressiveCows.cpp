#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& Arr, int N, int C, int minDist) {
  
    int lastPos = Arr[0];
    int cow = 1;
    for (int i = 1; i < N; i++) {
        if (Arr[i] - lastPos >= minDist) {
            lastPos = Arr[i];
            cow++;
        }
        if (cow == C) return true;
    }
    return false;
}

int getDistance(vector<int>& Arr, int n, int cows) {
      sort(Arr.begin(), Arr.end());
    int low =1;
    int high= Arr[n-1] - Arr[0];
    int ans =-1;

    while(low<=high){
        int mid = low + (high - low) / 2;
        if(isPossible(Arr, n, cows, mid)){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> Arr = {1, 2, 4, 8, 9};
    int n = Arr.size();
    int cows = 3;
    cout << getDistance(Arr, n, cows) << endl;
    return 0;
}