#include<iostream>
#include<string>
using namespace std;
int main(){
  string s1;
  cin>>s1;
  for(int i=0;i<s1.size();i++){
    s1[i]='X';
  }
  cout<<s1;
}
//exercise 3.10
/*
int main(){
  // string s1("gfy*ghuu");
  string s1;
  cin>>s1;
  for(int i=0; i<s1.size();i++){
  if(!ispunct(s1[i])){
    cout<<s1[i];
  }
}
}
*/
