#include<bits/stdc++.h>
using namespace std;
//using 2 pointer approach

string twoSum(int n, vector<int> &arr, int target){
sort(arr.begin(), arr.end());
int low =0;
int high= n-1;
while(low!=high){
    int sum=arr[low]+arr[high];
    if(sum<target){
        low++;
    }
    else if(sum>target){
        high--;
    }
    else{
        return "true";
    }
}
return "false";
}
int main(){
  vector<int> arr={2,6,5,7,11};
  int n=arr.size();
  int target=14;
   string r = twoSum(n,arr,target);
   cout<<r;
    return 0;
}