//.........brute force................
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(vector<int>&a, int N) {

//     // Outer loop that runs from 1 to N:
//     for (int i = 1; i <= N; i++) {
//         // flag variable to check
//         //if an element exists
//         int temp = 0;
//         //Search the element using linear search:
//         for (int j = 0; j < N - 1; j++) {
//             if (a[j] == i) {
//                 // i is present in the array:
//                 temp = 1;
//                 break;
//             }
//         }
//         // check if the element is missing
//         //i.e flag == 0:

//         if (temp == 0) return i;
//     }
//     // The following line will never execute.
//     // It is just to avoid warnings.
//     return -1;
// }

// int main()
// {
//     int N = 5;
//     vector<int> a = {1, 2, 4, 5};
//     int ans = missingNumber(a, N);
//     cout << "The missing number is: " << ans << endl;
//     return 0;
// }



//......optimal approach
#include <bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums,int n) {
        n=nums.size();
        int xor2=0;
        int xor1=0;
        for(int i=0;i<n;i++){
            xor2=xor2^nums[i];
            xor1=xor1^i;//as it is starting from  0 not 1
        }
        //keep this outside loop as only n is to be multiplied
            xor1=xor1^n;
        
          return xor1^xor2;
        }
        
    int main()
{
    int n = 5;
    vector<int> nums = {1, 2, 4, 5};
    int ans = missingNumber(nums, n);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
