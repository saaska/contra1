#include <iostream>
using namespace std;
int main()
{
int i, max = 0,k=0,j;
	int* a;
	long long n;
	cin >> n;
	a = new int[n];
	for (i=0; i<n;i++){
	    cin>>a[i];
	}
	for (i=0; i<n;i++){
		if (a[i]<=a[i+1] || i==n-1) k++;
	}
	cout << k << endl;
    return 0;
}
//k=16
//Osipov Denis
