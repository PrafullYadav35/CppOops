#include <iostream>
using namespace std;
  int n=4;
void Ppattern11(){
  
for(int i=1;i<=4;i++){


for(int j=1;j<=i;j++){
    cout<<j;
}
for(int j=1;j<= (2*n-2*i);j++){
cout<<" ";
}
for(int j=1;j<=i;j++){
    cout<<i+1-j;
 
}
cout<<endl;
}

}


int main(){
Ppattern11();
return 0;
}

