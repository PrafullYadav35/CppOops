#include<bits/stdc++.h>
using namespace std;
//approach:create temp array and store all non zero 
//store first all element of temp variable in arry
//store Zero at left spaces in array
int main(){
           int n;
 cout<<"Enter size of array";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int temp[n];
// temp[n]={0};
int j=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp[j]=arr[i];
        j++;
    }
}
//store first all element of temp variable in arry

for(int i=0;i<j;i++){
arr[i]=temp[i];

}


//store zero at left spaces 
for(int i=sizeof(temp);i<n;i++){
    arr[i]=0;
}

cout<<"After Moved all Zero at end Array is \n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}