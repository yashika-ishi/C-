#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter till which num you want to print ll primes";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=2;j<i;j++){

            if(i%j==0){
            flag++;                 //ticked to 1 whenever it is not prime
            break;
                     }

        
        if(flag==0 && i!=1){                    // if 5=5 prime too  here evey i is checked by j++
            cout<<j<<endl;
            flag=0;            //back to 0 everytime
            }
        }
    }
    return 0;
}