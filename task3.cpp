//Захаров Вячеслав, Ивт-19-1, k=10.
#include<iostream>
using namespace std;
int main(){
int *a,k=1,n,i,b=1;
cin>>n;
a=new int[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{if (a[i]>a[i+1]) b++;
else b=1;
if (b>k) k=b;}
cout<<k;
}