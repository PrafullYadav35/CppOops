#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach
//Two Pointer approach
//This only work for Sorted array
int main() {
    vector<int> a = {1, 2, 3,4,13,14,15};
    vector<int> b = {1,2,3,4,9,12,15,16};
    vector <int> ans;
    int n1 = a.size();
    int n2= b.size();
    int vis[n2];
   for(int i=0;i<n2;i++){
       vis[i]=0;
   }
    

     for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
              if(b[j]>a[i]){
                break;
            }
          
        }
    }

    //print intersection result
    for(auto it:ans){
        cout<<it<<" ";
    }
}