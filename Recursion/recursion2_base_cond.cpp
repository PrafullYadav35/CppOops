#include <iostream>
using namespace std;

int count=0;
int print1(){
    if(count==3){
        return 0;
        
    }
   

  
     cout<<1;
    count++;
      print1();
}

int main(){
    print1();
    return 0;
}