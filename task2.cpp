//Захаров Вячеслав, Ивт-19-1, k=9.
#include<iostream>
using namespace std;
int main(){
int a,k=0;
cin>>a;
while(a!=-1)
{if (a%2==1) k++;
cin>>a;}
cout<<k;
}