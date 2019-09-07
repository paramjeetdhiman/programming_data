#include<bits/stdc++.h>

using namespace std;

class Human{
    public: 
    string name ;
    //static property can used for scope resolution not directly it gives an error

    void introduce();
    // we can define that method of class outside the class
    // using the scope resolution operator (.. :: ..)
    // keep in mind define all methods before creating an object


};

// string Human::name = "null";
// ABove statement not work because it is not a static member only methods can we define....

//scope resolution
void Human::introduce(){

    cout<<Human::name<<endl;
}

int main(){

    Human anil;

    anil.introduce();
    return 0;
}