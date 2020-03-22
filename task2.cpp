#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a=0,sum=0;
    while(a!=-1){
        cin >> a;
        if(a<0 && abs(a%2)!=0){
            sum++;
        }
    }
	cout << sum << endl;
}
//Никифоров Сергей, 22