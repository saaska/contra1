//Pavlov Vadim 7
#include <iostream>
using namespace std;
int main(){
    int i = 0;
    int k;
    while(k!=-1){
        cin >> k;
        if (k < 0 && k%2==0)
                i++;
    }
cout << i;
}