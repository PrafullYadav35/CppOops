#include<bits/stdc++.h>
using namespace std;
//approach:use 2 pointer approach i and j 
// find first zero and j point that first zero 
// i = j+1;
// if array[i ] is not zero swap and increese j
int main(){
           int n;
 cout<<"Enter size of array";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

//finding first zero elemnt
int j=-1;
for(int i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;

    }
}

//swapping till n

for(int i=j+1;i<n;i++){
   if(arr[i]!=0){
    swap(arr[i],arr[j]);
    j++;
   }
}






cout<<"After Moved all Zero at end Array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}