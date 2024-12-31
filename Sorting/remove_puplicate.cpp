#include<iostream>
using namespace std;
//note it only works for sorted array not unsorted array
//like 1 2 2 33 33 7 8( sorted)
// 1 2 67 9 6 1 2 9   not work for this (unsoted)
int main(){
    int n;
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter sorted array";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //algo for remove duplicate value in sorted array
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!= arr[i]){
            arr[i+1]=arr[j];   
              i++;
        }
      

    }
    int j= i+1;

    cout<<"duplicate removed array";
      for(int i=0;i<(j);i++){
        cout<<arr[i]<<" ";
    }
    
    return i+1;
}