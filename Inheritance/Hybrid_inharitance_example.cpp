#include<iostream>
using namespace std;

class human{
public:
    human(){
        cout<<"HUMAN !";
    }
};

class male: public human{
public:
    male(){
        cout<<"Male !";
    }
};

class tall{
public:
    tall(){
        cout<<"Tall !";
    }
};

class Ram: public male, public tall{
    public:
Ram(){
    cout<<"Ram !";
}

};

int main()
{
Ram r;

return 0;
}//@rajendra_chimala