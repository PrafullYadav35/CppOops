#include<iostream>
using namespace std;

int find_Factorial(int n){
    if(n==1){
        return 1;
    }
    return n*(find_Factorial(n-1));
}
int main(){
cout<<find_Factorial(10);
}