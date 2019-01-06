#include <iostream>
#include "Sales_item.h"
// //exercise1.21
int main(){
  Sales_item item1,item2;
  std::cin>>item1>>item2;
  std::cout<<item1+item2<<std::endl;
  return 0;
}
// //exercise1.22
int main(){
  Sales_item item1;
  Sales_item sum;
  if(std::cin>>item1){
  sum=item1;
    while(std::cin>>item1){
      sum+=item1;
      std::cout<<sum<<std::endl;
    }
  }
  return 0;
}
// //exercise1.23
int main(){
  Sales_item item1,item2;
  int count=1;
  if(std::cin>>item1){

    while(std::cin>>item2){
      if(item2.isbn==item1.isbn){
        count++;
      }
      else{
      std::cout<<item1.isbn<<" "<<count;
        item1=item2;
        count=1;
      }
    }

  }
  std::cout<<item1.isbn<<" "<<count;
  return 0;
/*test input
  *a 3 2 a 4 6 a 8 7 b 2 1 b 2 3 c 1 1
  */
}
