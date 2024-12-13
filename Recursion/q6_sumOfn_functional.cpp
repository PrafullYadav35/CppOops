#include <iostream>
using namespace std;
//sum of n number using parameter recursion
int sumOfn(int i,int sum){
  if(i<1){
    return sum;
  }
  sumOfn(i-1,i+sum);
}
int main(){
    cout<<sumOfn(3,0);
    
}