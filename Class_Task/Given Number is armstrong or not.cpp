#include<iostream>
using namespace std;
class A{
    public:
    int n,num,sum=0,rem,count;

    void calculate(){
	start:
        cout<<"\nEnter a number of Three digits: ";
        cin>>n;
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
            count++;
        }
        if(count>0){
        
        	calculate();
		}
        
    }
};
int main()
{
A a;

a.calculate();

return 0;
}//@rajendra_chimala