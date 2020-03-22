//K = 6 ; ADAMOV AYAAL ; IVT-19-2

#include <iostream>
using namespace std;

int main() {
    int n, *A, i, max=1, count=1;
	cin >> n;
	A = new int [n];
	for (i = 0; i < n; i++){
		cin >> A[i];
	}
	for (i = 0; i < n-1; i++){
		if (A[i]<=A[i+1]){
		    count=count+1;
		}
		if (max < count){
		        max = count;
		    }
		if (A[i]>A[i+1]){
		    count=1;
		}
	}
    cout << max << endl;
}