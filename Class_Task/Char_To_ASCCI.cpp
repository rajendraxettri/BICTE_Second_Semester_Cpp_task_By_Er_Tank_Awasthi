#include<iostream>
#include<string.h>
using namespace std;



int main()
{
    char Abc[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
    char abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    char num[]={'0','1','2','3','4','5','6','7','8','9','\0'};
    char special[]={' ','!','"','#','$','%','&','?','(',')','*','+',',','-','.','/','\0'};
char inputnum;
cin>>inputnum;
int A=65;
int a=97;
int zero=48;
int ascii;
int spccl=32;
if (inputnum>='A' && inputnum<='Z')
{
for (int i = 0; i <= 26; i++)
{
if (Abc[i]==inputnum)
{
    ascii=A+i;
    
}}

}

else if (inputnum>='a' && inputnum<='z')
{
for (int i = 0; i < 26; i++)
{
if(abc[i]==inputnum){
    ascii=a+i;
    
}
}
}

else if (inputnum>='0' && inputnum<='9')
{
  for (int i = 0; i <= 9; i++)
  {
    if (num[i]==inputnum)
{
    ascii=zero+i;
}
  }
  
}
else{
for (int i = 0; i <= 15; i++)
{
    if (special[i]==inputnum)
    {
        ascii=spccl+i;
    }
    
}



}


cout<<"The Ascci is : "<<ascii;


return 0;
}//@rajendra_chimala