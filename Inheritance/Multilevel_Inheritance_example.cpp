#include<iostream>
using namespace std;
class grandFather{
    public:
    int a,b;
    void inputData(){

        cout<<"Enter any two number : ";
        cin>>a>>b;

    }
};

class father: public grandFather{
public:
int sum;

void sumOfTwoNumber(){

    sum=a+b;
}


};

class child: public father{
public:
void result(){
    cout<<"The sum of two number is : ";
}
    
};


int main()
{


return 0;
}//@rajendra_chimala