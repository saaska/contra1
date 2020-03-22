#include <iostream>

using namespace std;

int main(){
    int n, x = 0, y = 0;
    cin >> n;
    int *A = new int[n];
    for(int i = 1;i <= n;i++){
        cin >> A[i];
        if(A[i-1] <= A[i]) x++;
        else if(x > y) {
            y = x;
            x = 1;
        }
    }
    if(x > y) y = x;
    cout << y << endl;
}
// Васильев Айхал, 6