// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// set<int>st;
// int n;
// cout<<"enter the vale of n: ";
//     cin>>n;
//      int arr[]={1,2,2,3,4,4,5,6,6,7,7};
//      n=sizeof(arr)/sizeof (arr[0]);        //so as n can match the size with given array
//     for(int i=0;i<n;i++){
//         st.insert(arr[i]);
//     }
//    int idx=0;                // to add the set values in the array again
//     for(auto it:st){
//         arr[idx]=it;
//         idx++;
//     }


   
//     cout<<"After removing duplicated from sorted array: ";
//       for (int i = 0; i < idx; i++) {           // loop runs till the idx value found means till the unique values only
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//---------optimal approach---   o(n)
#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
       if( arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
       }
    }
    return(i+1);
}
    int main(){
        int n;
        cout<<"enter the size of elements: ";
        cin>>n;

        int arr[100]; //or use vector
        cout<<"enter the elements of array in sorted order: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int res=remove_duplicate(arr,n);
        cout<<"After removing duplicated numbers are: ";
        for(int i=0;i<res;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
}
