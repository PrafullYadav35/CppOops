#include <iostream>
using namespace std;
//print linear N to 1 
// not use f(i-1,N)
int Print_Nto1(int n, int i){
   if(i>n) {
     return 0;
   }
   Print_Nto1(n,i+1);
   cout<<i<<endl;

}
int main(){
Print_Nto1(10,1);
}
//concept of backtracking