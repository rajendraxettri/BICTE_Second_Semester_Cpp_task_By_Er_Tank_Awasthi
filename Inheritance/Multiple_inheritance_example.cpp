#include<iostream>
using namespace std;
class jethoXora{
    public:
    int num1;
    void inputn1(){

        cout<<"Enter a number : ";
        cin>>num1;
    }
};

class kanchoXora{

    public:
    int num2;
void inputn2(){
        int num2;

        cout<<"Enter second number : ";
        cin>>num2;
    }
};

class sum:public jethoXora, public kanchoXora{

    public:

    int sum;

    void sumOfTwoNumber(){
        

    sum = num1+num2;
    cout<<"The result is : "<<sum;

    }
};


int main()
{
    sum s;
    s.inputn1();
    s.inputn2();
    s.sumOfTwoNumber();


return 0;
}//@rajendra_chimala