// to take array input
#include<iostream>
//using namespace std;
// int main(){
    // int n;
    // cout<<"enter the size of array:";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //    cin>>arr[i];
    // }

//     //traversal
//     cout<<"entered elements are:";
//     for(int i=0;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }



// //Insertion at a index

// int pos=2,val=3;

// for(int i=n;i>pos;i--){ //shift right from end to pos
//     arr[i]=arr[i-1];
// }
//     arr[pos]=val; //insert at position
//     n++;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }


//delete by value

// int val=3;
// int idx=-1; //idx will store index of element val but it is not yet found so -1

// for(int i=0;i<n;i++){ //search for val
//     if(arr[i]==val)
//     idx=i;
// }
//     if(idx!=-1){ // if found,del it by shifting
// for(int i=idx;i<n-1;i++){ // this loop starts at the index when val was found and move through the array to shift all elements after it to left
//     arr[i]=arr[i+1];
  
// }
//   n--;
//   cout << "Array after deleting " << val << ": ";
//         for(int i = 0; i < n; i++){
//             cout << arr[i] << " ";
//     }
//     cout << endl;
//     } else {
//         cout << val << " not found in array." << endl;
//     }



//del at index

// int delIndex;
//     cout << "Enter index to delete (0 to " << n-1 << "): ";
//     cin >> delIndex;

//     // Check for valid index
//     if(delIndex < 0 || delIndex >= n){
//         cout << "Invalid index!" << endl;
//     } else {
//         // Shift elements left from delIndex
//         for(int i = delIndex; i < n - 1; i++){
//             arr[i] = arr[i + 1];
//         }
//         n--; // reduce array size

//         // Print updated array
//         cout << "Array after deleting at index " << delIndex << ": ";
//         for(int i = 0; i < n; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//   return 0;
// }



//linear saerch
// int linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key)
//         return i;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"enter the size of arr:";
//     cin>>n;

//     int arr[100];
//     cout<<"enter" <<n<<"elements:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//      cout << "Enter element to search: ";
//     cin >> key;
    
//     int index = linearSearch(arr, n, key);
//     if(index != -1)
//         cout << "Element " << key << " found at index " << index << "." << endl;
//     else
//         cout << "Element " << key << " not found in array." << endl;

//     return 0;
// }



//binary search 

// int binarySearch(int arr[], int n, int key) {
//     int start = 0;
//     int end = n - 1;

//     while(start <= end) {
//         int mid = start + (end - start) / 2;

//         if(arr[mid] == key)
//             return mid;
//         else if(arr[mid] < key)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }

//     return -1; // not found
// }

// int main() {
//     int n;
//     cout << "Enter the size of sorted array: ";
//     cin >> n;

//     int arr[100]; // fixed max size
//     cout << "Enter " << n << " sorted elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter element to search using Binary Search: ";
//     cin >> key;

//     int index = binarySearch(arr, n, key);

//     if(index != -1)
//         cout << "Element " << key << " found at index " << index << "." << endl;
//     else
//         cout << "Element " << key << " not found in array." << endl;

//     return 0;
// }



//find min and max in array

// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     int mini = arr[0], maxi = arr[0];

//     for(int i = 1; i < n; i++) {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }

//     cout << "Minimum: " << mini << endl;
//     cout << "Maximum: " << maxi << endl;
//     return 0;
// }



//reverse an array

// int main() {
//     int n;
//     cout << "Enter array size: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter " << n << " elements: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     // Reverse
//     for(int i = 0, j = n - 1; i < j; i++, j--) {
//         swap(arr[i], arr[j]);
//     }

//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }



//Remove duplicate elemnets

// int main() {
//     int n;
//     cout << "Enter size of sorted array: ";
//     cin >> n;

//     int arr[100];
//     cout << "Enter sorted elements: ";
//     for(int i = 0; i < n; i++) cin >> arr[i];

//     int temp[100];
//     int j = 0;
//     for(int i = 0; i < n; i++) {
//         if(i == 0 || arr[i] != arr[i - 1]) {
//             temp[j++] = arr[i];
//         }
//     }

//     cout << "Array after removing duplicates: ";
//     for(int i = 0; i < j; i++) cout << temp[i] << " ";
//     cout << endl;
//     return 0;
// }



//frequency count 
#include<unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequency of elements:" << endl;
    for(auto it : freq) {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}

