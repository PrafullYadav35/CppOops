//better approach for missing number 
//we use Hash array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[4]={1,2,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int lElement=arr1[n-1];

    int hash[lElement+1];
    for(int i=0;i<lElement+1;i++){
        hash[i]=0;
    }

   for(int i=0;i<n;i++){
    hash[arr1[i]]=1;
   }

   //finding whose element in hash array that have 0 hash value
   int s=sizeof(hash)/sizeof(hash[0]);
  
   for(int i=1;i<s;i++){
    if(hash[i]==0){
        cout<<i;
        break;
    }
   }
    return 0;

}