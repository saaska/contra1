//число 14

#include <iostream>
using namespace std;

int main()
{
	float a,b,c;
	cin>>a>>b;
	c=b/a;
	if (a==0 || b==0) cout << " NO SOLUTION";
	else {
		cout << "X<="<< c;
	}
}