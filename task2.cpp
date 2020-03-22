#include <iostream>
using namespace std;
int main(){
	int count = 0, x =0;
	while (x != -1) {
		cin >> x;
		if(x % 2 == 1 && x < 0){
			count++;
		}
	}
	cout << count;
}
// Дьячковский Аман k = 8