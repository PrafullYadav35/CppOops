#include<bits/stdc++.h>
using namespace std;
// Optimal approach
//Two Pointer approach
//This only work for Sorted array
int main() {
    vector<int> a = {1,2,3,4,6,6};
    vector<int> b = {3,4,5,6,6,7};
    vector <int> ans;
    int n1 = a.size();
    int n2= b.size();
 
//two pointer  approach
int i=0;
int j=0;
while(i<n1 && j<n2){
    if(a[i]<b[j]){
        i++;
    }
    else if(b[j]<a[i]){
        j++;
    }
    else{
        ans.push_back(a[i]);
        i++;
        j++;
        
    }
}
 //print intersection result
    for(auto it:ans){
        cout<<it<<" ";
    }

}