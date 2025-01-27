#include<bits/stdc++.h>
using namespace std;

//pickup every number and do a linear search on how many times every number appears
int main(){
int arr[]={1,1,3,3,4,4,5,5,7,7,500};

int n= sizeof(arr)/sizeof(arr[0]);
//find maximum element
int maxi = arr[0];
for(int i=0;i<n;i++){
maxi = max(maxi,arr[i]);
}

for(int i=arr[0];i<=maxi;i++){
    int num=arr[i];
    int count =0;
    for(int j=0;j<n;j++){
        if(arr[j]==num){
            count++;
        }
    }
    if(count ==1){
        cout<<arr[i];
        break;
    }
}

    return 0;
}