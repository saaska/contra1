#include <iostream> // Вешников, k = 7
using namespace std;

int main(){
    int x = 0, b = 0;
        while(x != -1){
        cin >> x;
        if (x < 0 && x % 2 == 0){
        b++;
        }
    }
    cout << b;    
}
    