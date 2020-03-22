//Захаров Вячеслав, Ивт-19-1, k=8.
#include<iostream>
using namespace std;
int main(){
float a,b,x,k=0;
cin>>a>>b;
x=b/a;
if (x>0) {k=1;
   if (-1*b>=0) cout<<"X<="<<x;
    else cout<<"X>="<<x;}
if (x<0) {k=1;
      if (-1*b>=0) cout<<"X>="<<x;
        else cout<<"X<="<<x;}
if (x==0) {k=1;
     if(a-b>=0) cout<<"X>="<<x;
        else cout<<"X<="<<x;}
if (a==0&&b==0) {k=1;cout<<"X - любое число";}
if (k==0) cout<<"NO SOLUTION";
}