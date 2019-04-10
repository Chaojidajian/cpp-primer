#include<iostream>
#include<vector>
#include<string>
using namespace std;
//exercise 3.4.2
int main(){
  vector<int> v1(10);
	int i=0;
  while(cin>>v1[i],i!=10){
    i++;
  }
	for (auto it1 = v1.begin(), it2= v1.end();it1 != it2;it1++)
	{
		it2--;
		cout<<*it1 + *it2<<endl;
  }
  return 0;
}
