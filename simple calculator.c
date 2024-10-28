#include <stdio.h>
void main ()
{
    int a,b;
    char ch;
    printf("enter a,b values and operator:");
    scanf("%d%s %c",&a,&b,&ch);
    switch (ch)
    {
        case'+':printf("the addition is %d",a+b);
        break;
         case'-':printf("the subtraction is %d",a+b);
        break;
         case'*':printf("the multiplication is %d",a+b);
        break;
         case'/':printf("the division (quetient) is %d",a+b);
        break;
         case'%':printf("the division (remainder) is %d",a+b);
        break;
        default:printf("invalid output");
        break;
    }
}
