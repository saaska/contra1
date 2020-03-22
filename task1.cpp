//вариант 11  Кириллов Иван
#include <iostream>
using namespace std;
int main (){
    float A,B,X;
    cin>>A>>B;
    X=B/A;
    if(A!=0){
        cout<<"X>"<<X;
    }
    else {
        cout<<"NO SOLUTION";
    }
}