#include<bits/stdc++.h>
using namespace std;

class Human{

    private:
        int age;
        string name;

    public:
    // Default Constructor
    // Human(){
    //     cout<<"Default Constructor"<<endl;
    //     name = "NoName";
    //     age = 0;

    // }

    Human(string iname="noname", int iage=0){ 
        cout<<"Overloaded Constructor"<<endl;
        name = iname;
        age = iage;   
    }

    void speakUp(){
        cout<<name<<endl<<age;
    }
};

int main(){
    Human anil;
    anil.speakUp();
    
    return 0;
}