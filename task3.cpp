#include <iostream>

using namespace std;

int main(){
	int* A, n, k=0, max=0;
	cin >> n;
	A = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = n-1; i > 0; i--) {
	    if(A[i] < A[i-1]){
	        k++;
	        if(k>max){
	            max=k;
	        }
	    }else{
	        k=0;
	    }
	}
	cout << max+1 << endl;
}

//Васильев Гаврил