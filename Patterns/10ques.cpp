#include <iostream>
using namespace std;


void Ppattern10(){
 int start=1;

    for(int i=0;i<=4;i++){
      
      if(i%2==0 ) start=1;
      else start=0;

      for(int j=0; j<=i;j++){
        cout<< start<<"\t";
        start = 1-start;
      }
      cout<< endl;
    }
}

int main() {
    Ppattern10();
    return 0;

}  
