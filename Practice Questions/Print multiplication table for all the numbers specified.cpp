#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of your choice till which u want to find the table for";
    cin>>n;
    for(int i=1;i<=n;i++){                  //This is the table no. 1 X _
        cout<<"\n";                         //to create a line space b/t two tables of diff no.s
        for(int j=1;j<=10;j++){
            cout<<i<<"X"<<j<<"="<<i*j<<"\n";    //this is the _X 1
        }

    cout<<endl;                 //for iteration i loop
    }
    return 0;
}