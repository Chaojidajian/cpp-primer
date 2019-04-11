#include<iostream>
#include<vector>
using namespace std;
//exercise 3.31
int main(){
  int a[10];
  for(int i=0;i!=10;i++){
    a[i]=i;
    cout<<"a["<<i<<"]="<<a[i]<<endl;
  }
}
//exercise 3.32
/*
int main(){
  int a[10] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> vector1(a,a+10);
	int b[10];
	for (int i=0;i！=10;i++)
	{
		b[i] = a[i];
	}
}
*/
