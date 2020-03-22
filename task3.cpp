//Pavlov Vadim 8
#include <iostream>
using namespace std;
int main(){
    int *A,n,i,len,y,p,j;
    cin >> n;
    len = 0;
    y = 0;
    p = 0;
    for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	for (int j = 0; j < n; j++){
	len = n;
	for (int i = 0; i < n-1; i++) {
		if (A[i]>A[i+1]){
		    y++;
		    if (len == y){
		        p++;
		        y = 0;
		    }
		}
	}
	len--;
}
if (A[n-1]>A[n])
    cout << p+1;
else
	cout << p;
}