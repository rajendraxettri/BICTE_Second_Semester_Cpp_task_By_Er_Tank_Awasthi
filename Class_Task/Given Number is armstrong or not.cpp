#include<iostream>
using namespace std;
class A{
    public:
    int n,num,sum=0,rem;

    void calculate(){

        cout<<"Enter a number : ";
        cin>>n;

        num=n;
        while (num != 0)
        {
           rem= num%10;
           sum = sum + rem*rem*rem;
           num = num/10; 
        }

        if (sum == n)
        {
            cout<<"Armstrong number ! ";
        }else{
            cout<<"Armstrong number !";
        }
        
        
    }
};


int main()
{
A a;
a.calculate();

return 0;
}//@rajendra_chimala