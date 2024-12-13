#include <iostream>
using namespace std;

int count=1;
int print_n(int n){
    if(count>n){
        return 0;
    }
    cout<<count<<endl;
    count++;
    print_n(n);
    
}
int main(){
//     int n;
//    cout<<"enter tht number till you wnat print number  ";
//    cin>>n;
   print_n(100);
    return 0;
}