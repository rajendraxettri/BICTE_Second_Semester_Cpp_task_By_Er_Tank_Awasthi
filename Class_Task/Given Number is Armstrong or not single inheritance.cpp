#include<iostream>
using namespace std;
class A{
    public:
    int n,num,sum=0,rem,count;
public:
    void calculate(){
	start:
        cout<<"\nEnter a number of Three digits: ";
        cin>>n;
        
        
        
    }
};
class B : public A{
    public:
    void newfun(){
    	num=n;
    	while (num > 0)
        {
           rem= num%10;
           sum = sum +rem*rem*rem;
           num = num/10; 
    }
         if (sum == n)
        {
            cout<<n<<" Armstrong number ! ";
        }else{
        	system("CLS");
            cout<<n<<" Not Armstrong number !";
            
        }
    }
};
int main()
{


B b;
b.calculate();
b.newfun();
return 0;
}//@rajendra_chimala3