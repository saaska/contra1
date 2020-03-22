//вариант 13  Кириллов Иван
#include <iostream>
using namespace std;
int main(){
    int a=0,b=0;
    while(a!=-1){
        cin>>a;
        if(a<0 && a%2!=0){
            b++;
        }
    }
    cout<<b;
    return 0;
}