//Call By Value
using namespace std ;
#include<iostream>
#include<conio.h>

void Fun(int);

int main()
{
    int No = 21 ;

    Fun(No);

    cout << endl <<"Value After Function Call = "<< No;  // 21

    getch();
    return 0;
}
void Fun(int Num)
{
    Num++;
}
