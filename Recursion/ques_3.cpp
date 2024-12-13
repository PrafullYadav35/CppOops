
//print n to 1

#include <iostream>
using namespace std;
//print n to 1

int print_n(int i ){
    if(i<1){
       return 0;
    }
   cout<<i<<endl;
   print_n(i-1);
}
int main(){
//     int n;
//    cout<<"enter tht number till you wnat print number  ";
//    cin>>n;
   print_n(5);
}