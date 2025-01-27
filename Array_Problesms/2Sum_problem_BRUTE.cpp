// Type 1; Yes or No type
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int arr[]={2,6,5,8,11};
//     int s= sizeof(arr)/sizeof(arr[0]);
//     int target=14;

//     for(int i=0;i<s;i++){
//         for(int j=i;j<s;j++){
//             if(arr[i]+arr[j]==target){
//                 return 1;
//                 //note 1 means - yes and 
//                 // -1 means No
//             }
//         }
        
//     }
    
//     return -1;
// }


//Type 2; retun indexes type


int main(){
    int arr[]={2,6,5,8,11};
    int s= sizeof(arr)/sizeof(arr[0]);
    int target=14;

    for(int i=0;i<s;i++){
        for(int j=i;j<s;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" ";
                cout<<j;
                
               return (i,j);
            }
        }
        
    }
    
    return -1;
}