#include <iostream>
using namespace std;
int main()
{
int k=0,i=0;
while(k != -1){
    cin>>k;
    if (k<0 && k%2!=0) i++;
}
cout << i << endl;
    return 0;
}
//k=15
//Osipov Denis