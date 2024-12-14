#include<iostream>
using namespace std;
int main(){

   string s;
   cout<<endl<<"Enter String";
   cin>>s; 
   //pre compute
  int hash[256]={0};

  for(int i=0;i<=s.size();i++){
    hash[s[i]]++;
    //  hash[s[i]-'a']++;
  }


  int q;
   cout<<endl<<"How many number query you wants perform";
   cin>>q;
    cout<<endl<<"Enter characters ";
   while(q--){
    char c;
    cin>>c;
    //fetch

cout<<hash[c]<<endl;
//cout<<hash[c-'a']<<endl;

   }
   return 0;
}