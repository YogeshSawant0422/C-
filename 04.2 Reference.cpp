// Reference

using namespace std;
#include<iostream>
#include<conio.h>

void Fun(int&);

int main()
{
    int i = 20;

    Fun(i);

    cout<<endl<<"Value After Function Call  = " << i ; // 21

    getch();
    return 0;
}

void Fun(int &Ref)
{
    Ref++;
}
