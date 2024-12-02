// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;
void Ppattern14(){
    
    for(int i=1;i<=5;i++){
          char temp ='A';
        for(int j=1;j<=i;j++){
            
           
            cout<<temp;
           temp++;
        }
         
        cout<<endl;
      
    }
}
int main() {
    Ppattern14();

    return 0;
}