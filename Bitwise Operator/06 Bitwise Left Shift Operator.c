//Bitwise Left Shift Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 0 , iRes = 0;

    printf("\n Enter A Numbers : ");
    scanf("%d",&iNo);
    iRes = iNo << 5 ;

    printf("\n Output Of Bitwise Left Shift Operator >  %d << 5 = %d",iNo , iRes);

    getch();
    return 0;
}
