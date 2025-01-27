//find the first occurence of any element
#include <bits/stdc++.h>
using namespace std;
int main(){

    //taking input array
               int n;
 cout<<"Enter size of array";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int elem;
cout<<"Enter elemenet that you wants find position ";
cin>>elem;

for(int i=0;i<n;i++){
    if(arr[i]==elem){
        cout<<endl<<i;
        return i;
    }
  
}
  cout<<"Not any element found";
    return -1;


    
}