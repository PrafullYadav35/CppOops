//Approach 1; insert first array in set
// insert second arry in set 
//store all in union set 
//Brutte Force Approach 
#include<bits/stdc++.h>
using namespace std;
set<int> st;

int main(){
//taking input of 2 array
cout<<"enter size of first array";
int n1;
cin>>n1;
cout<<"enter element of first array first array";
int arr1[n1];
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
cout<<"Enter size of second array";
int n2;

cin>>n2;

int arr2[n2];
cout<<"Enter the element of second array";
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}

for(int i=0;i<n1;i++){
    st.insert(arr1[i]);
}
for(int i=0;i<n2;i++){
    st.insert(arr2[i]);
}

for(auto it:st){
cout<<it<<" ";
}

    return 0;
}