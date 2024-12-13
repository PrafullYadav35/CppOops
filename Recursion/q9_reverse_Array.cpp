#include <bits/stdc++.h>
using namespace std;
//reverse an araay  by only one pointer
int reverse_array(int i ,int arr[]){
    int n =sizeof(arr);
    if(i>=n/2){
       return 0;
    }
   swap(arr[i],arr[n-i-1]);
   reverse_array(i+1,(arr[i]));
     
     cout<<arr<<endl;

}
int main(){
    // Write C++ code here
    
  int a[5]={1,2,3,4,5};
 reverse_array(0,a);

 
    return 0;
}