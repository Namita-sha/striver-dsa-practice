# 🚀 DSA: Basic Array Operations in C++

This repository contains a single C++ file, `basic-array-operations.cpp`, which includes multiple fundamental array operations as per Striver’s A2Z DSA Sheet. It is a great starting point for understanding array manipulations, search techniques, and basic algorithmic thinking.

---

## 📄 File: [`basic-array-operations.cpp`](./basic-array-operations.cpp)

### ✨ Features Implemented:

| # | Feature | Description |
|---|---------|-------------|
| 1 | **Input & Traversal** | Take array input from user and print elements |
| 2 | **Insertion at Index** | Insert a value at a specific index |
| 3 | **Delete by Value** | Delete the first occurrence of a given value |
| 4 | **Delete by Index** | Delete the element at a specific index |
| 5 | **Linear Search** | Search for an element in unsorted array |
| 6 | **Binary Search** | Search in a sorted array using binary search |
| 7 | **Find Min & Max** | Find the smallest and largest elements in array |
| 8 | **Reverse Array** | Reverse the elements of the array in-place |
| 9 | **Remove Duplicates** | Remove duplicates from a sorted array |
| 10 | **Frequency Count** | Count frequency of each element using `unordered_map` |

---

# 🔢 Remove Duplicates from Sorted Array

This repository contains three solutions to the classic DSA problem:

> **"Given a sorted array, remove duplicates in-place such that each element appears only once and return the new length."**

---

## ✅ Problem Description

Given a **sorted integer array**, remove the duplicates **in-place** so that each element appears only once and return the new length.  
You must do this using **O(1)** extra memory.

---

## 📌 Constraints

- The input array is sorted in non-decreasing order.
- You cannot use extra space for another array (for optimal solution).
- You must **modify the input array in-place**.

---

## ✅ Solutions

### 1. 💥 Brute Force – Shift on Duplicate

- Loop through array.
- If `arr[i] == arr[i+1]`, shift all elements left.
- Decrease size by 1.
- **Time:** `O(n^2)`  
- **Space:** `O(1)`  
- ❌ Inefficient for large arrays.

---

### 2. ⚡ Better – Using `set<int>`

- Insert all elements in a `set` to auto-remove duplicates.
- Copy back to the array.
- **Time:** `O(n log n)`  
- **Space:** `O(n)`  
- ✅ Works even for **unsorted arrays**

---

### 3. 🚀 Optimal – Two-Pointer Approach (Sorted Array Only)

```cpp
int removeDup(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return (i + 1);
}



# 🔄 Rotate Array by K Positions

This file contains an optimal solution to the **"Rotate Array"** problem.

---

## ✅ Problem Statement

Given an array, rotate the elements to the right by `k` steps.

> Example:  
> Input: `arr = [1,2,3,4,5,6,7]`, `k = 3`  
> Output: `arr = [5,6,7,1,2,3,4]`

---

## 🔍 Constraints

- Array size: `1 <= n <= 10^5`
- `k` can be greater than `n`, so use `k % n`
- Must rotate **in-place** (O(1) space)

---

## 🚀 Approach: Reverse Method (Optimal)

We can rotate the array in 3 simple steps:

1. Reverse the entire array  
2. Reverse the first `k` elements  
3. Reverse the remaining `n - k` elements

### 🧠 Why this works:
Reversing parts of the array rearranges the order to mimic rotation without using extra space.

---

### ✅ C++ Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // in case k > n
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr, k);

    for (int i : arr) cout << i << " ";
    return 0;
}




## 🛠️ How to Compile & Run

```bash
g++ basic-array-operations.cpp -o basic-array-operations
./basic-array-operations

.......................................................................................................................................................
# 🔍 Largest Element in an Array - C++ Solution

This program solves the classic **array problem** of finding the **largest element** using two different approaches:

1. **Brute Force Approach** using sorting
2. **Optimal Approach** using a single pass linear traversal

---

## 🧠 Problem Statement

> Given an array of integers, find and return the **largest (maximum) element** from the array.

---

## 📌 Example

### 📥 Input
Size = 6
Array = [5, 1, 8, 3, 2, 10]

shell
Copy
Edit

### 📤 Output
The largest element is: 10

yaml
Copy
Edit

---

## 📂 Approaches and Algorithms

### ✅ 1. Brute Force Approach (Using Sorting)

**Algorithm:**
1. Sort the array in ascending order.
2. Return the last element of the sorted array.

**Code Snippet:**
```cpp
sort(arr.begin(), arr.end());
return arr[n - 1];
Time Complexity: O(n log n)
Space Complexity: O(1) (in-place sorting)

🔸 This approach is simple but not optimal for just finding the maximum.

🚀 2. Optimal Approach (Single Pass)
Algorithm:

Initialize a variable largest = arr[0]

Traverse the array from index 1 to n-1

For each element, if arr[i] > largest, update largest

After the loop, return largest

Code Snippet:

cpp
Copy
Edit
int largest = arr[0];
for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
        largest = arr[i];
    }
}
return largest;
Time Complexity: O(n)
Space Complexity: O(1)

🔹 Best approach for efficiency in time and memory.

💻 How to Run the Code
🔧 Compile the C++ file:
bash
Copy
Edit
g++ largest_element_in_array.cpp -o largest_element_in_array
▶️ Run the program:
bash
Copy
Edit
./largest_element_in_array    # On Linux/macOS or Git Bash
.\largest_element_in_array    # On Windows PowerShell


.......................................................................................................................................................


# 🚀 Remove Duplicates from Sorted Array (C++)

This C++ program removes duplicate elements from a **sorted array** in-place using an efficient `O(n)` two-pointer approach.

---

## 🧠 Problem Statement

> Given a sorted array, remove all duplicate elements such that each element appears only once.  
> Return the new length and update the original array up to that length.

---

## 📌 Sample Input
Enter the size of elements: 9
Enter the elements of array in sorted order:
1 2 2 3 4 4 5 6 6
After removing duplicated numbers are: 1 2 3 4 5 6

yaml
Copy
Edit

---

## 🛠️ Approaches

### 1. Brute Force (using `set`)
- Time Complexity: `O(n log n)`
- Space Complexity: `O(n)`
- Uses `set<int>` to remove duplicates and reassigns to the array.

### 2. Optimal (Two-Pointer Technique)
- Time Complexity: `O(n)`
- Space Complexity: `O(1)`
- Uses a pointer `i` to track unique values and a runner `j` to scan forward.

---

## 🔧 How It Works (Two-Pointer)

```cpp
int remove_duplicate(int arr[], int n) {
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return (i + 1);
}
🧪 How to Compile & Run
bash

g++ remove_duplicate_from_sorted_array.cpp -o remove_duplicates
./remove_duplicates


📚 References
Striver's A2Z DSA Sheet

LeetCode

TUF Platform

✍️ Author
Namita Sharma
