#include <iostream>
using namespace std;
void  Ppattern16(){
    char temp ='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<temp;
           
        }
        cout<<endl;
        temp++;
    }
}

int main() {
    Ppattern16();

    return 0;
}

// A
// BB
// CCC
// DDDD
// EEEEE