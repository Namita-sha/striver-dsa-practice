#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
     /*
        int temp=nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
    */  // for 1 rotation only

      k=k%n;
      // reverse fxns are written this way not indices wise because in cpp it is acceptable
      reverse(nums.begin(),nums.end());//reverse entire array
       reverse(nums.begin(),nums.begin()+k);//reverse till k elements
        reverse(nums.begin()+k,nums.end()); //reverse from k elemnts to remaining(end elemets)
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(arr, k);
    for (int i : arr) cout << i << " ";
    return 0;
}
