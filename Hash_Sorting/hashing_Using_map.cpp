#include<iostream>
#include <map>
using namespace std;
int main(){
    
    int n;
    cout<<endl<<"enter array size";
    cin>>n;
    
    int arr[n];
     cout<<endl<<"enter array elemensts";
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }


    //PRECOMPUTATION 
    map <int,int> container;
     for(int i=0;i<=n;i++){
        container[arr[i]]++;
    }

int m;
 cout<<endl<<"enter number for how many query want perform";
 cin>>m;
 cout<<endl<<"Enter query elements/numbers ";
 while(m--){
    int num; 
   
    cin>>num;
    //fetch 
    cout<<endl<<container[num];
 }
    return 0;
}