# LeetCode-C-Solutions-DSA-Practice
This repository contains my solutions to LeetCode problems using **C++**.  
Each problem is solved with clean, well-commented code and often includes time and space complexity analysis.

The problems are grouped by topic for easier navigation and revision.

---

## 🧠 Purpose

- 📘 Strengthen Data Structures & Algorithms
- 🧪 Prepare for **GATE, internships, and technical interviews**
- 🔁 Track progress and improvement over time

---

## 📂 Folder Structure
-Arrays
---

## ✅ Topics Covered

- Arrays


---

## 📌 Code Style & Features

- ✅ Clean, modular C++ code
- 📝 Each file starts with a **link to the LeetCode problem**
- ⏱️ Includes **Time and Space complexity**
- 📄 Descriptive comments for easy understanding

---

## 🧩 Sample Code Snippet

```cpp
//https://leetcode.com/problems/single-number/

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>&nums){
    int ans=0;
    for(int i=0; i<nums.size(); i++){
        ans^= nums[i];// Using XOR operation to find the single number
    }
    return ans;
}
int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl; // Output should be 4
    return 0;
}
