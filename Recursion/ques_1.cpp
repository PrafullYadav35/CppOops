#include <iostream>
using namespace std;
int count =0;
int Printname(string name){
    if(count ==5){
        return 0;
    }
   cout<<name<<endl;
   count++;
   Printname(name);
}

int main(){
    Printname("Prafull kumar yadav");
    return 0;
}