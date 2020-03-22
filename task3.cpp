//Скрыбыкин Айсен k=27
#include <iostream>
using namespace std;

int main(){
    int n,*A,i,x;
    x=1;
    cin>>n;
    A = new int[n];
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i<n-1;i++){
        if(A[i]<A[i+1]){
            x++;
        }
    }
    cout<<x<<endl;
}