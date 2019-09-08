#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        string *name;
        int *age;
    
    public:
        //cosntructor
        Human(string iname , int iage){

            //stores memory dynamically

            name = new string;
            age = new int;

            *name = iname;
            *age = iage;
    }

    void display(){
        cout<<"Hi I am "<< *name<<" and I am "<<*age<<"years old.  "<<endl;
    }
};

int main(){
    
    return 0;
}