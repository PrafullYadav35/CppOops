#include<iostream>
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
//left rotation

int temp=arr[0];
for(int i=1; i<n;i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;

cout<<"Left rotated array by one place are:\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
// Approach: store first element of array in temporaray variable
//  and shift all arry to one position left