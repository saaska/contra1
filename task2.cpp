#include <iostream>
using namespace std;

int main()
{
int n, x;
n = 0;
x = 0;
//do {
    //cin >> n;
//}
//while(x != -1)
while( x != -1 ){
    cin >> n;
    if (( x < 0 ) &&  (x % 2 == 1 ))
    {
        x++;
    }
}
cout << x << endl;
}