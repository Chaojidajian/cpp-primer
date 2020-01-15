#include<iostream>
#include<vector>
using namespace std;
//exercise3.35
int main(){
  int a[10]={1,1,1,11,1,1,1,1,1,1};
  for(int *p=a;p!=&a[10];p++){
    *p=0;
  }
  cout<<"    "<<a[9]<<endl;

}
//exercise3.36
/*
int main(){
  vector<int> v1(10);
  vector<int> v2(10);
  if(v1==v2){
    cout<<"equal";
  }
}
*/
