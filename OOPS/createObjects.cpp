#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    string name;

    void introduce(){
        cout<<"Hello!"<<name<<endl;
    }
};

int main(){

    Human anil; //anil stores in the stack not in the heap
    //using new keyword the object will be allocated in the heap and it will be dynamic   
    //and also the new keyword  can return memory address ... pointer
    
    Human *bunty = new Human(); //in heap
    
    anil.name = "Anil";
    anil.introduce();

    bunty->name = "Bunty";
    bunty->introduce();

    return 0;
}