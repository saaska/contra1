#include<iostream>
using namespace std;
int main(){
int *a,n,i,k=0;
cin>>n;
a=new int[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
if(a[i+1]<a[i] || i==n-1) k++;
cout<<k;
}
//Кардашевский 9
