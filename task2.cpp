//Максимов. 18-ый К. Число неотрицательных нечетных элементов

#include <cstdlib>
#include <iostream>
using namespace std;

int main (){
   int *A, x = 100, length = 0, output = 0;
   A = new int[x];
   for (int i = 0; i != x; i++){
      cin >> A[i];
      length++;
      if (A[i] == -1){
         i = x-1;
      }
   }
   for (int i = 0; i != length; i++){
      if ((A[i] > 0) && (A[i]%2 != 0)){
         output++;
      }
   }
   cout << output;
   return 0;
}