#include <iostream>
#include<vector>
#include<string>
using namespace std;
//exercise 3.21
int main(){
vector<int> v1{1,2,3,4};
for(auto it = v1.cbegin(); it != v1.cend()&&!it->empty();++it){
  cout<<*it<<endl;
}
return 0;
}
// exercise 3.22
/*
int main(){
  for(auto it = text.cbegin(); it != text.cend()&&!it->empty();++it){
    *it=toupper(*it);
    cout<<*it<<endl;
  }
  return 0;
}
*/
//exercise 3.23
/*
int main(){
  vector<int> v1{1,2,3,4,5,6,7,8,9,0};
  for(auto it = v1.begin();it!=va.end()&&!it->empty();++it){
    *it=2 * *it;
    cout<<*it<<endl;
  }
  return 0;
}
*/
