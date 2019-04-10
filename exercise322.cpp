#include <iostream>
#include <string>
using namespace std;
//exercise 3.2
int main(){
  string line;
  while(getline(cin,line))
  cout<<line<<endl;
  return 0;
}
/*
int main(){
  string word;
  while(cin<<word)
  cout<<word<<endl;
  return 0;
}
*/
//exercise 3.4

/*
int main(){
  string s1,s2;
  cin>>s1>>s2;
  if（s1!=s2){
  cout<<(s1>=s2?s1:s2)<<endl;
  }
}
*/
//exercise 3.5
/*
int main(){
  string s1,s2;
  cin>>s1>>s2;
  if(s1.size()!=s2.size()){
    cout<<(s1.size()>s2.size()?s1:s2)<<endl;
  }else{
    cout<<"The length of the strings are the same",,endl;

  }
*/
