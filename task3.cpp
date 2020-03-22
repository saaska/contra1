/*
Васильева Карина
Будет введено число n, затем ровно n целых чисел. Определите максимальную длину убывающего отрезка
k = 10
*/

#include <iostream>

using namespace std;

int main(){

    int n, k,  x = 0, y = 0, *A;

    cin >> n;

    A = new int[n];

    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n; i++){

        if (A[i] > A[i+1]){
            x++;
        }
        else{
            if (y > x){
                x = y;
                y = 0;
            }
    }
}
if (y > x)
    x = y;

cout << x << endl;
return 0;
}