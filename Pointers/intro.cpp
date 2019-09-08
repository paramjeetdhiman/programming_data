#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int *p; //define the pointer variable using * sign
    p = &a; // & address of the variable

    a=5;

    cout<<a<<endl;
    cout<<p<<endl; //address without asterisk...
    cout<<&a<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl; //deferencing or operate value that address
    //p is the address
    //and *p is the value at address
    

    return 0;
}

/***
 *          >>>>>>>>> Pointers<<<<<<<<<<<<
 * Pointers are variables that stores the address of another variable
 * 
 * int > 4 bytes
 * char > 1 bytes
 * flaot > 4 bytes
 * 
 * 
 * 
 * 
 * 
 * 
 * ****/