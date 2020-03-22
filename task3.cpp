#include <iostream> // Вешников, k = 8
using namespace std;

int main(){
    int n, i, *A, b = 0;
    bool t = false;
    cin >> n;
    A = new int[n];
    
    for (i = 0; i < n; i++){
        cin >> A[i];
    }
    for (i = 0; i < n - 1; i++){
         if (A[i] <= A[i+1] && t == true){
            t = false;
        }
        if (A[i] > A[i+1] && t == false){
            b++;
            t = true;
        }
        if (A[i] <= A[i+1] && t == true){
            t = false;
        }
    }
    cout << b;
}