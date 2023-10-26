#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1,num2;
    char op;
    scanf("%f%c%f",&num1,&op,&num2);
    float result;
    switch(op)
    {
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            result=num1/num2;
            break;
        default:
            printf("Invalid operator");
            break;
    }
    printf("%.2f",result);
    system("pause");
    return 0;
}
