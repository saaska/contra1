//Скрыбыкин Айсен k=25
#include <iostream>
using namespace std;

int main(){
    int a,z;
    z=0;
do{
    cin>>a;
    if(a%2==1&&a>=0){z++;}
}while(a!=-1);
cout<<z<<endl;
}