// brute force
// #include<bits/stdc++.h>
// using namespace std;
// int removeDup(int arr[],int n){
//     for(int i=0;i<n-1;){
//         if(arr[i]==arr[i+1]){
//             for(int j=i+1;j<n-1;j++){
//                arr[j]=arr[j+1];
//             }
//             n--;
//         }
//         else 
//         i++;
//     }
//     return n;


//..............better using set
// set<int>st;
// for(int i=0;i<n;i++){ //insert elements into set
//     st.insert(arr[i]);
// }

// //cpy elements back to the array
// int index=0;
// for(auto it:st){
//     arr[index++]=it;
// }
// return st.size();  //return new size
// }



// int main(){
//     int arr[]={1,1,2,2,4,4,5,6,7,7,8,8,9,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int newsize=removeDup(arr,n);

//     cout<<"elemnts after removing duplicates: ";
//     for(int i=0;i<newsize;i++)
    
//     {
//     cout<<arr[i]<<" ";
    
// }
// cout<<endl;
// return 0;
// }



//...............optimal approach

#include<bits/stdc++.h>
using namespace std;
int removeDup(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j] !=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
 int main(){
    int arr[]={1,1,2,2,4,4,5,6,7,7,8,8,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int newsize=removeDup(arr,n);

    cout<<"elemnts after removing duplicates: ";
    for(int i=0;i<newsize;i++)
    
    {
    cout<<arr[i]<<" ";
    
}
cout<<endl;
return 0;
}




