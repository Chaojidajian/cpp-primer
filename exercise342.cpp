#include<iostream>
#include<vector>
#include<string>
using namespace std;
//exercise 3.24
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
//exercise 3.25
/*
int main(){
  vector<int> grade(11);
  int number;
  while(cin>>number){
    if(number>100){
      cout<<"wrong!";
      break;
    }
    auto it=grade.begin();
    int temp=number/10;
    it=it+temp;
    ++(*it);
  }
  for(int i=0;i!=10;i++){
    cout<<i*10<<"--"<<i*10+9<<":";
    cout<<grade[i]<<endl;
  }
  cout<<"100:";
  cout<<grade[11]<<endl;

}
*/
