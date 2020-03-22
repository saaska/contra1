#include <iostream>

int main() {
  int n=0,f=0,i;
  std::cin>>n;
  int a[n];

for ( i=0;i<n;i++){
 std::cin>>a[i];
}
for ( i=0;i<n-1;i++){
 if ((a[i]<a[i+1])||(a[i]!=a[i+1])){
   f++;
 }
}
f++;
std::cout<<f;
}