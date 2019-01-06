#include<iostream>
int main();
int main(){
//exercise 1.13
int sum=0;
for(int a=50;a<=100;++a)
{
  sum+=a;
}
  std::cout<<sum;

for(int a=10;a>=0;--a){
  std::cout<<a;
}
//exercise 1.16
int a,b;
std::cout<<"please enter two numbers";
std::cin>>a>>b;
int c;
if(a>b){
  c=a;
  a=b;
  b=c;
}
int sum=0;
for(int k=a;k<=b;++k){
  sum+=k;
}
std::cout<<sum;
//exercise 1.17
int temp=0, val=0;
if (std::cin>>temp) {
  int count=1;
  while(std::cin>>val){
    if (val==temp){
    ++count;}
    else
      {
      std::cout<<temp<<"occurs"<<count<<"times"<<std::endl;
      temp=val;
      count=1;
      }

    }
    std::cout<<temp<<"occurs"<<count<<"times"<<std::endl;
  }
return 0;

}
