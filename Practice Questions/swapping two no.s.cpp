//swap using third varible
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"number 1=  "<<a<<"  number 2=   "<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nAfter swappin: \n num1= "<<a<<"  and num2=   "<<b;
    return 0;

}
//swap using no third variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"number 1=  "<<a<<"  number 2=   "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter swappin: \n num1= "<<a<<"  and num2=   "<<b;
    return 0;

}
