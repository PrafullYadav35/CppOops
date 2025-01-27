#include<iostream>
using namespace std;
//Brute Force method
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
cout<<"\n Enter the value of D ";
cin>>d;
//Performing left rotation

//storing in temp
int temp[d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
//shifting

for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}

//adding at the last 
int j=0;
for(int i=n-d;i<n;i++){
    arr[i]=temp[j];
    j++;
}


cout<<"Left rotated array by one place are:\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}