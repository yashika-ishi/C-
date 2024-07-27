#include<iostream>
using namespace std;
int main(){
    int n,rev=0,t;
    cout<<"enter a no.: ";
    cin>>n;
    while(n!=0){
            t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    cout<<rev;
    return 0;
}