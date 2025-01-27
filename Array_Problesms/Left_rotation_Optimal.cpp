#include<iostream>
#include<bits/stdc++.h>
//optimal approach
using namespace std;
//left roation of array 
//Brute force approach 
int main(){
    int n;
 cout<<"Enter size of array";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int d;
cout<<"Enter the value od D";
cin>>d;
//left rotation

reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);



cout<<"Left rotated array by one place are:\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
// Approach: store first element of array in temporaray variable
//  and shift all arry to one position left