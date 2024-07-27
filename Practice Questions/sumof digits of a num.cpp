#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"enter a num";
    cin>>n;
    while(n!=0){
    sum += n%10;
    n=floor(n/10);   
    }
    cout<<sum;
    return 0;
}




//way2
#include<iostream>
using namespace std;
int main(){
    int n,r, sum=0;
    cout<<"enter a num";
    cin>>n;
    while(n!=0){
        r=n%10;
    sum += r;
    n=n/10;
        
    }
    cout<<sum;
    return 0;
}