#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        int age;
        //we can only use it inside the class
    public:
        void displayAge(){
            cout<<age <<endl; 
        }

        void setAge(int value){
            

        }

};

int main(){
    
    Human anil;
    anil.age = 23;

    return 0;
}