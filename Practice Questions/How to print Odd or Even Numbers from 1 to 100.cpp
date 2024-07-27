// How to print Odd or Even Numbers from 1 to 100
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i=1;i<=100;i++)
    {
        if(i%2==0){
            cout<<i<<"is even";
        }
        else{
            cout<<i<<"is odd";
            }
    }
    return 0;
}

// ONLY EVEN
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i=1;i<=100;i++){
        if(i%2==0){
            cout<<"\n"<<i;
        }
     }
    return 0;
}