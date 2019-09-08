#include<bits/stdc++.h>
using namespace std;

int main(){

    int a; //integer
    int* p; // pointer to integer
    a = 10;
    p = &a;

    *p=12;
    cout<<a;
    // cout<<p<<endl;
    // cout<<*p<<endl; //value at address pointed by p
    // cout<<&a<<endl;

    


    return 0;
}