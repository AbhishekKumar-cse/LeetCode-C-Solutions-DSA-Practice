#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}

int main() {
    int n;  // Variable to store the number of elements

    // Ask the user to enter the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);  // Create a vector of size n to hold the elements

    // Prompt user to input the elements
    cout << "Enter " << n << " integers (elements of the array): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element into the vector
    }

    // Print the array back to the user to confirm the input
    cout << "You entered the array: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) 
            cout << ", ";  // Print commas between elements except after last
    }
    cout << " ]" << endl;

    // Call the function to find the single number
    int single = singleNumber(arr);

    // Output the result in a user-friendly way
    cout << "The element that appears only once in the array is: " << single << endl;

    return 0;  // Indicate that the program ended successfully
}
