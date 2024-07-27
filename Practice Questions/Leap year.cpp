#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter year to check if it is leap year"
    cin>>n;
    if(n%4==0 && n%400==0 && n%100!=0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
    return 0;
}

