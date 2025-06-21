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

## 🛠️ How to Compile & Run

```bash
g++ basic-array-operations.cpp -o basic-array-operations
./basic-array-operations




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




📚 References
Striver's A2Z DSA Sheet

LeetCode

TUF Platform

✍️ Author
Namita Sharma
