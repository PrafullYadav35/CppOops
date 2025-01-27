#include<bits/stdc++.h>
using namespace std;

//Use XOR operation 
int main(){

    int arr[]={1,1,3,3,4,4,5,5,7,7,500};
    int n= sizeof(arr)/sizeof(arr[0]);
    int XOR=0;
    for(int i=0;i<n;i++){
      XOR=XOR^arr[i];
    }

    cout<<XOR;
   
    return 0;
}