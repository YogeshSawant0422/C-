//Bitwise  Compliment Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo1 = 0 , iRes = 0;

    printf("\n Enter A Numbers : ");
    scanf("%d",&iNo1);
    iRes = ~iNo1;

    printf("\n Output Of Compliment >  ~%d = %d",iNo1 , iRes);

    getch();
    return 0;
}
