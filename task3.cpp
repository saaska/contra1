//Колодезникова Снежана, k = 18;
#include <iostream>
using namespace std;

int main(){
    int n, c = 0, i;
	cin >> n;
    int *A = new int[n];
    for (i = 1; i <= n; i++) {
		cin >> A[i];
	}
	for (i = 0; i < n; i++) {
	    if(A[i] >= A[i-1] && A[i-1] < A[i-2]){
			c = c + 1;
	    }
	}
	for (i = 0; i < n; i++) {
		if (A[i] >= A[i-1] && A[i] <= A[i+1]){
			c = c + 1;
		}
	}
	cout << c;
	return 0;
}