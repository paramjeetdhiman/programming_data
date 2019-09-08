#include<bits/stdc++.h>
using namespace std;

// Function overloading
// It is writing the function with the same name but different types and different numbers of parameters 

class Human{
    private:
        int age;
        string name;

    public:
        //constructor
        // Human(){
        //     cout<<"Default Construtor"<<endl;
        //     age = 0; name = "null";
        // }

        Human(string iname){
            cout<<"Construtor with name as a parameter"<<endl;
            age = 0; name = iname;
        }

        Human(int iage){
            cout<<"Construtor with age as a parameter"<<endl;
            age = iage; name = "null";
        }

        Human(string inmame, int iage){
            cout<<"Construtor with name and age as a parameter"<<endl;
            age = iage; name = inmame;
        }


        void display(){
            cout<<name<<endl<<age<<endl;
        }

};

int main(){
    
    // Human show;
    // show.display();
    
    Human andy(23);
    andy.display();
    Human anil("23");
    anil.display();
    Human aman("aman",23);
    aman.display();


    return 0;
}  