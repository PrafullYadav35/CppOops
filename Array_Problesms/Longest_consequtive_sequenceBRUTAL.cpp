#include<bits/stdc++.h>
using namespace std;
//approach: pickup an elemement x  and search for x+1, x+2, x+3 ,.....
//this code is thinked ny me after understanding approach
int logestConseq(vector <int> arr){
    int longest =1;
    int counter=1;
    for(int i=0;i<arr.size();i++){
        int x= arr[i];
        
        for(int j=0;j<arr.size();j++){
            while(x+1==arr[j]){
                counter++;  
                x=x+1;
            }

        

        longest= max(longest,counter);
        counter =1;
        }
    }
    return longest;  
}
int main(){
    vector <int> a= {1,2,3,4,5,5,5,7,8,9,0,10,11,12,12,11,14,15};
    int out=logestConseq(a);
    cout<<endl<<"longest is :"<<out;
    return 0;
}