// Шигапов ЧИСЛО K-17
#include <iostream>
using namespace std;

int main()
{
    int a=0, n=0;
	while (a!=-1)
	{
		cin>>a;
		if(a>0 && a%2==0)
			n++;
	}
	cout<<n;
}