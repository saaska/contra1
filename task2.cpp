#include <iostream>

using namespace std;

int main(){
    int x, k=0;
    for(int i=0; ;i++){
        cin >> x;
            if(x<0 && abs(x)%2==1){
                k++;
            }
        if(x==-1){
            break;
        }
    }
    cout << k << endl;
}
// Гаврил