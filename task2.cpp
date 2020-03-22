#include<iostream>
using namespace std;
int main(){
int a[10000],i=0,k=0;
do{
    cin>>a[i];
    if(a[i]>0 && a[i]%2==0) k++;
    i++;
}
while(a[i-1]!=-1);
cout<<k;
}
//Кардашевский 9