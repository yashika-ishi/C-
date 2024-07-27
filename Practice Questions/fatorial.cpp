#include<iostream>
using namespace std;
int main(){
    int i,n;
    int f=1;          //IMP
    cout<<"enter a no.";
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    cout<<"Factorial of number "<<n<<"is"<<f;
    return 0;

}