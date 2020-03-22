#include <iostream>

using namespace std;

int main(){
    int i, k = 0, f = 0;
    while (f == 0){
        cin >> i;
        if (i % 2 == 1 && i > 0)
            k++;
        if (i == -1)
            f = 1;
    }
    cout << k << endl;
    return 0;
}
//9 (2 группа 7 + 2)