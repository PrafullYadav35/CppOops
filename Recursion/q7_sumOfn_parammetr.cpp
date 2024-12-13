#include <iostream>
using namespace std;
//sum of n number using parameter recursion
int sum_ofn_functinal(int n){
    if(n==0){
      return 0;
    }

    int sum = ((n)+sum_ofn_functinal(n-1));
    return sum;

}
int main(){
cout<<sum_ofn_functinal(1);
}