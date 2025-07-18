// Brute force approach
// #include<bits/stdc++.h>
// using namespace std;
// int sortarr(vector<int>& arr,int n){
//     sort(arr.begin(),arr.end());    //sort the array
//     return arr[n-1];               // return the last
// }
// int main(){
//     int n;
//     cout<<"enter the size of the elements:";
// cin>>n;
//  vector<int>arr(n);
// cout<<"enter the elements of the array:"<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"the largest element is:"<<sortarr(arr,n)<<endl;
// return 0;
//  }





 // better or optimal
#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n){
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"enter the size of the elements:";
    cin>>n;

int arr[n];
cout<<"enter the elements of the array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"the largest element is:"<<largest(arr,n)<<endl;
    return 0;
}