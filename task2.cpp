#include <iostream> //Никита Суслонов 22

using namespace std;

int main(){
    int x,k;
    x = 0;
    k = 0;
    while (x != -1){
        cin >> x;
        if (x < 0 && x % 2 != 0)
            k++;
    }
    cout << k;
}