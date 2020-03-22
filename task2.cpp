//Михайлов Ариан ИВТ19-1 В:12
#include <iostream>
using namespace std;


int main() {
  int x,s;
  s = 0;
while (x != -1) {
 cin >> x;
 if ((x>=0)&&(x%2==0)) s++;
}
cout << s;
}