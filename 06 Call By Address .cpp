//Call By Address
using namespace std;
#include<iostream>
#include<conio.h>

void Fun(int*);

int main()
{
    int No = 20;

    Fun(&No);

    cout << "\n Value After Function Call = "<<No<<endl;

    getch();
    return 0;
}
void Fun(int *ptr)
{
    (*ptr)++;
}
