#include <iostream>
using namespace std;

int main(){
    int n,sum=0,a=0;
    cin >> n;
    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
			while(a==0){
				i++;
				if(arr[i]<arr[i+1]){
					a=0;
				}
				else{
					a=1;
				}
			}
			sum++;
        }
		else{
			sum++;
		}
		a=0;
    }
	cout << sum << endl;
}
//Никифоров Сергей, 24