//Object Oriented Approach - Calculator .
using namespace std ;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class Calculator
{
public :
            int No1 ,No2, Ans ;
            Calculator();
            Calculator(int N1 , int N2);
            void Add();
            void Sub();
        ~Calculator();
};
Calculator :: Calculator()
{
    cout <<endl<<"\n Inside Default Constructor !!!"<<endl;
    No1 = No2 = Ans = 0;
}
Calculator :: Calculator(int N1 , int N2)
{
    cout<<endl<<"Inside Parameterized Constructor !!!"<<endl;
    No1 = N1;
    No2 = N2;
    Ans = 0;
}
void Calculator :: Add()
{
    Ans = No1 + No2;
}
void Calculator :: Sub()
{
    Ans = No1 - No2;
}
Calculator :: ~Calculator()
{
    cout<< endl<<"\n Inside The Destructor Of Calculator Class !!!"<<endl;
}
int main()
{
    Calculator Obj1;

    Obj1.No1 = 10;
    Obj1.No2 = 20;

    Obj1.Add();
    cout<<endl<< "Addition Is = "<<Obj1.Ans<<endl;

    getch();
     Calculator Obj2(40 , 20);

    Obj2.Sub();
    cout<<endl<< "Subtraction Is = "<<Obj2.Ans<<endl;
    getch();
    return 0;
}
