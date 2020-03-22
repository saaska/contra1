#include <iostream>
using namespace std;
int main(){
	int n = 0, m = 0, *A, i, count = 0;
	cin >> n;
	bool prov = false;
	A = new int[n];
	for (i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (i = 0; i < n - 1; i++) {
	    if(A[i] >= A[i +1]){
	        count++;
		    prov = false;
		}
		if(A[i] < A[i +1] && prov == false){
		    count++;
		    prov = true;
		}
	}
	cout << count;
}
// Дьячковский Аман k = 9