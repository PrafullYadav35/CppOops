#include <iostream>
using namespace std;
void Ppattern15(){
    
    for(int i=5;i>=1;i--){
          char temp ='A';
        for(int j=1;j<=i;j++){
            
           
            cout<<temp;
           temp++;
        }
         
        cout<<endl;
      
    }
}
int main() {
    Ppattern15();

    return 0;
}

// ABCDE
// ABCD
// ABC
// AB
// A