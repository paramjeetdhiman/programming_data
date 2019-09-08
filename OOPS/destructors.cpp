#include<bits/stdc++.h>
using namespace std;

//destructors is also a special memeber function of class i.e. is executed whenever 
// an object of class goes out of scope or delete expression is applied

// create an object constructor is called
// when memory allocated for that object is released that time dstructor is called

class Human{

    public:
        Human(){
            cout<<"Constructor Called!!!!!!"<<endl;
        }
        
        // Destructor  
        ~Human(){
            //can't return any values and we can't pass any parameters to the destructors....
            cout<<"Destructor Called!!!!!"<<endl;
        }
};

int main(){
    
    Human *anil = new Human();

    //destroy an object using delete keyword
    // destructor called!!!!!!!!!!!!!

    delete anil;
    return 0;
}