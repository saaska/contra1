#include <iostream>
using namespace std;
int main(){
//2-21
    int x, count=0;
    while (x != -1){
        cin >> x;
        if (x >= 0 && x%2 == 0)
            count += 1;
    }
    cout << count << endl;
    return 0;
}