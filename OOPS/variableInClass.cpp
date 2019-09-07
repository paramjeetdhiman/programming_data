#include<bits/stdc++.h>
#include<string>

using namespace std;

class HumanBeing{
    public:
    string name;

    void introduction(){
        cout<<"Hello! I am "<<name<<endl;
    }
    
};

int main(){
    HumanBeing ajay;
    ajay.name="Ajay";
    ajay.introduction();

    HumanBeing anjali;
    anjali.name = "Anjali";
    anjali.introduction();

    return 0;
}