#include <iostream>
using namespace std;
// вариант 5, Бузинаев
int main(){
    int n, i, j, count=0, *A, max=0;
    cin >> n;
    A = new int [n];
    for (i = 0; i < n; i++) {
		cin >> A[i];
	}
    for (j = 0; j < n; j++){
        if (A[j+1]<A[j] || A[j-1]>A[j]){
            count++;
            if (count > max){
                max=count;
            }
        }
        if (A[j+1]>=A[j]){
            count = 0;
        }
    }
    cout << max;
}