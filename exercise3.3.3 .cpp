#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v1={1,2,3,4};
for(decltype(v1.size()) i=0; i != v1.size(); ++i){
  cout<<v1[i]<<endl;
}
return 0;
}
