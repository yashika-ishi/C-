#include<iostream>
using namespace std;
int main(){
    int n,pal,r,original;
    cout<<"Enter a number to check palidrome";
    cin>>n;
    original=n;
    while(n!=0){
    r=n%10;
    pal=pal*10+r;
    n=n/10;}
    if(pal==n){
        cout<<"palidrome number";
    else{
        cout<<"not";
    }
    }
    retuen 0;
}