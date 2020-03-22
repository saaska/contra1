//Максимов. 20-ый К. Максимальная длина убывающего отрезка

#include <cstdlib>
#include <iostream>
using namespace std;

int main (){
   int *A, n, outone = 1, outtwo = 1;
   cin >> n;
   A = new int[n];
   for (int i = 0; i != n; i++){
      cin >> A[i];
   }
    for (int i = 1; i != n+1; i++){
		while (A[i] < A[i-1] && i != n){
		  outone++;
		  i++;
	  }
	  if (outone > outtwo){
		  outtwo = outone;
	  }
	outone = 1;

   }
	cout << outtwo;
	return 0;
}