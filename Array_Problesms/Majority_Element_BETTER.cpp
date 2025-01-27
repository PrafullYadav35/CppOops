#include<bits/stdc++.h>
using namespace std;

int majorityEl(vector<int>& nums){
    map<int,int> mpp;
    int count =0;
    for(int i=0;i<nums.size();i++){
        
        mpp[nums[i]]=count++;
    }
     
     for(auto it:mpp){
        if(it.second >nums.size()/2){
            cout<<it.first;
            return it.first;
        }
     }

}
int main(){
vector<int> nums={1,3,3,3,3,3,5,6,3,8,9};
majorityEl(nums);
    return 0;
}