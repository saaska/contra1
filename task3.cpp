//Михайлов Ариан ИВТ19-1 В:13
#include <iostream>
using namespace std;

int main() {
int n,s;
s = 0;
float *a;
cin >> n;
a = new float[n];
for (int i=0;i < n;i++){
  cin >> a[i];
  if (a[i-1]>a[i]) s++;
};
cout << s;
}