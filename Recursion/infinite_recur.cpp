#include <iostream>
using namespace std;

void print1(){
    cout<<1;

    print1();
}

int main(){
    print1();
    return 0;
}