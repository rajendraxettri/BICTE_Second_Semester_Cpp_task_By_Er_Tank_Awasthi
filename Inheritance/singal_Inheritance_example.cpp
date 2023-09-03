#include<iostream>
using namespace std;
class A{
    public:
    int num;

    void numInput(){

        cout<<"Enter a number : ";
        cin>>num;
    }
};

class B: public A{
public:
void output(){

    cout<<"The output is : "<<num;
}

};


int main()
{

B b;
b.numInput();
b.output();
return 0;
}//@rajendra_chimala