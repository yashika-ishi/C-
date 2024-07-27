#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"Enter a character to check: ";
    cin>>x;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
         || x == 'O' || x == 'U')
    {
        cout<<"it is a vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}



//using switch case............
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any Alpabet\n"; //input alphabet from user
    cin>>ch;//store the Entered Alphabet in ch

    switch(ch){
    //check lower case vowel letters
    case 'a':
    cout<<ch<<" is a vowel";
    break;

    case 'e':
    cout<<ch<<" is a vowel";            //CAN'T USE DOUBLE QUOTES FOR CASE'' IN ONLINE COMPILER!!!!!!!!!!!!!!
    break;

    case 'i':
    cout<<ch<<" is a vowel";
    break;

    case 'o':
    cout<<ch<<" is a vowel";
    break;

    case 'u':
    cout<<ch<<" is a vowel";
    break;

    //check upper case vowel letters
    case 'A':
    cout<<ch<<" is a vowel";
    break;

    case 'E':
    cout<<ch<<" is a vowel";
    break;

    case 'I':
    cout<<ch<<" is a vowel";
    break;

    case 'O':
    cout<<ch<<" is a vowel";
    break;

    case 'U':
    cout<<ch<<" is a vowel";
    break;

    default:
    cout<<ch<<" is a consonant";
    break;
    }

    return 0;
    }

