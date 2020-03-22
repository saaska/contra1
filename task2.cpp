#include <iostream>

int main() {
  int n=0,f=0;
while (n!=-1){
  std::cin>>n;
if ((n>0)&&(n%2!=0)){
  f++;
}
}
std::cout<<f;
}