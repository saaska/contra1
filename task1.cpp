#include<iostream>
using namespace std;
int main(){
float a,b,x;
cin>>a>>b;
x=b/a;
if(a==0 && b>0) cout<<"ANY NUMBER";
if(a==0 && b<=0) cout<<"NO SOLUTION";
if(b==0 && a<0) cout<<"X>0";
if(a!=0 && b!=0) cout<<"X<"<<x;
}
//Кардашевский 9