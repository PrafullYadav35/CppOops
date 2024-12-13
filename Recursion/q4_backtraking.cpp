#include <iostream>
using namespace std;
//print linear 1 to N 
// not use f(i+1,N)
int Print_1toN(int i){
if(i<1){
    return 0;

}
Print_1toN(i-1);
cout<<i<<endl;

}
using namespace std;
int main(){
Print_1toN(10);
   
}