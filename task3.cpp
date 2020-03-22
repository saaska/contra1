#include <iostream>
using namespace std;
int main(){
    //3-22
    int n, i, *X, count = 1;
    cin >> n;
    X = new int[n];
    for (i=0; i<n; i++)
        cin >> X[i];
    for (i=0; i<n-1; i++){
        if (X[i+1] > X[i])
            count += 1;
    }
    cout << count << endl;
    return 0;

}