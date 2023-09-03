#include<iostream>
using namespace std;
class father{
public:
int a;
int b;
void inputData(){
    cout<<"Enter any two number : ";
    cin>>a>>b;
}

};

class JethoXora: public father{
public:
void sum(){
    cout<<"The Sum of two number is : "<<a+b;

}
};

class kanchoXora: public father{

    public:
    void mulOfTwoNumber(){

        cout<<"The Mul of Two number is : "<<a*b;
    }
};


int main()
{

JethoXora jx;
jx.inputData();
jx.sum();
kanchoXora kx;
kx.inputData();
kx.mulOfTwoNumber();


return 0;
}//@rajendra_chimala