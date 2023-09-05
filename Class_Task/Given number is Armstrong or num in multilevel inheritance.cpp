#include<iostream>
using namespace std;
class A{
    public:
    int n,num,sum=0,rem,count=0;
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
            count++;
            
        }
    }
};
class C : public B{
public:
	void nf(){
		if(count>0){
	cout<<"\n Eenter again ! ";
}
	}

};
int main()
{


C c;
c.calculate();
c.newfun();
c.nf();
return 0;
}//@rajendra_chimala3