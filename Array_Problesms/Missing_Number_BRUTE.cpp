#include<bits/stdc++.h>
//Find Missing Number 
// Brute force approach
using namespace std;
int main(){
    int arr1[4]={1,2,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int a=arr1[n-1];
     
    for(int i=1;i<=a;i++){
       int flag=0;
        for(int j=0;j<n;j++){

            if(arr1[j]==i){
               flag =1;
                break;
            }
        }
        if(flag ==0){
            cout<<i;
        }
    }
    return 0;
}