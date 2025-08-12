#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxAllowedTime) {
   // maxAllowedTime = mid
    int painter = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {
       if (time <= maxAllowedTime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int minTimeToPaint(vector<int>& arr , int n , int m){
    int sum =0; 
    int maxVal = INT_MAX;
    for(int i =0; i<n; i++){
        sum+=arr[i];
        maxVal= max(maxVal, arr[i]);
    }
    int st = maxVal;
    int  end = sum;
    int ans = -1;

    while(st<=end){
        int mid = st + (end - st) / 2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int m = 2;  // Number of painters
    int minTime = minTimeToPaint(arr, n, m);
    cout << "Minimum time to paint: " << minTime << endl;
    return 0;
}