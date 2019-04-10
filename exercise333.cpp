#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
vector<int> v1={1,2,3,4};
for(decltype(v1.size()) i=0; i != v1.size(); ++i){
  cout<<v1[i]<<endl;
}
return 0;
}
//exercise 3.17
/*
int main(){
  vector<string> s1;
  string a;
  while(cin>>a))
  {
    s1.push_back(a);
  }
  for(int i=0;i<s1.size();i++){
    for(int j=0; j<s1[i].length();j++){
      s1[i][j]=toupper(s1[i][j]);
    }
  }
  for(int i=0; i<s1.size();i++){
    cout<<s1[i]<<endl;
  }
}
*/
//exercise 3.18
/*
vector<int> i{1,1};
vector<int> i(j);
vector<int i(2,1);
*/
//exercise 3.20
/*
int main(){
  vector<int> a;
  int b;
  while(cin>>b){
    a.push_back(b);
  }

  for(decltype(a.size()) i=0; i<a.size()/2;i++){
    cout<<a[i]+a[a.size()-i-1]<<endl;
  }
}
*/
