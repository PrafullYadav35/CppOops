#include<iostream>
using namespace std;
int main(){
    cout<<"enter array size";
    int n;
    cin>>n;
    cout<<"emter array element ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //prestore
    int hash[10]={0};
       for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    cout<<"how many number you wants to query";
    int q;//how many you want to do query 
    cin>>q;
    cout<<"enters numbers";
    while(q--){
        int number;
        
        cin>>number;

        //fetch 
        cout<<"numbers comes in array times ";
      cout<<endl<<hash[number];
    }
    return 0;
}