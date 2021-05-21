//Bitwise Right Shift Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 0 , iRes = 0;

    printf("\n Enter A Numbers : ");
    scanf("%d",&iNo);
    iRes = iNo >> 4 ;

    printf("\n Output Of Bitwise Right Shift Operator >  %d >> 4 = %d",iNo , iRes);

    getch();
    return 0;
}
