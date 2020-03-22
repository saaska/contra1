//K = 4 ; ADAMOV AYAAL ; IVT-19-2

#include <iostream>
using namespace std;

int main() {
    int a, count = 0;
    do
    {
        cin >> a;
        if (a>=0 && a%2!=0){
            count = count + 1;
        }
    } while(a!=-1);
    cout << count << endl;
    return 0;
}