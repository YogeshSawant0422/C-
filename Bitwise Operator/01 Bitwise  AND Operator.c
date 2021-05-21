//Bitwise  AND Operator
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo1 = 0 , iNo2 = 0 , iRes = 0;

    printf("\n Enter Two Numbers : ");
    scanf("%d%d",&iNo1,&iNo2);

    iRes = iNo1 & iNo2;

    printf("\n Output Of Bitwise AND Between >  %d & %d = %d",iNo1 , iNo2 , iRes);

    getch();
    return 0;
}
