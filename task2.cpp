#include <iostream>

using namespace std;

int main(){
    int c[100], l = 0, x = 0;
    for(int i = 1;i <= 100;i++){
        cin >> c[i];
        l++;
        if(c[i] == -1) break;
    }
    for(int i = 1;i <= l;i++){
        if(c[i] >= 0 && c[i] % 2 == 0) x++;
    }
    cout << x << endl;
}
// Васильев Айхал, 5