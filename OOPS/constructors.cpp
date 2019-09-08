#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        string name;
        int age;

    public:
        //constructor
        //default consructor automatically called
        
        Human(){
            //same name of class and has no return type
            // generally use to initalize the property of class
            // automatically called but can't be called manually
            name = "null";
            age = 0;
            cout<<"Constructor is called when you create an object of Human";
            cout<<endl;
        }

        void displayData(){
            cout<<name<<endl<<age<<endl;
        }

};


int main(){
    Human anil;
    anil.displayData();
    
    return 0;
}