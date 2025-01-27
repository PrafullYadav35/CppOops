//OPTIMAL approach for missing number 
//we use XOR concept
//same ^ same =0
// number ^0 = number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[4]={1,2,4,5};
    
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int lelement=arr1[n-1];
    int xor1=0;

    for(int i=1;i<=lelement;i++){
        xor1=i^xor1;
    }
    int xor2=0;

    for(int i=0;i<n;i++){
        xor2=arr1[i]^xor2;
    }

    cout<<(xor1^xor2);

}
