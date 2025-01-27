//use counter and maxim variable and traverse array
#include<bits/stdc++.h>
using namespace std;

//My solution after understanding concept
int main(){
  int arr[]={1,1,0,0,0,1,1,1,1,0,0,1};
  int n= sizeof(arr)/sizeof(arr[0]);
 
  int count=0;
  int maxim=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
        count++;
    }
    else{
        count =0;
    }
    if(arr[i]==1&&arr[i+1]==0 && (maxim<count||maxim==0)){
        maxim =count;
    }
   
  }

  cout<<maxim;
return 0;
}

//striver approach
// int count =0;
// int maxi =0;
// for(int i=0;i<n;i++){
//     if(arr[i]==1){
//         count++;
//     }
//     maxi =max(maxi,count);
// }