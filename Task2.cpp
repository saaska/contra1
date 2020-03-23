//Абрамов Семён k=4;
#include <iostream>

using namespace std;

int main()
{
    int a=0,count=0;
    cout << "Введите число:\n";

    while (a != -1){
        cin >> a;
        if(a > 0 && a % 2 != 0){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
